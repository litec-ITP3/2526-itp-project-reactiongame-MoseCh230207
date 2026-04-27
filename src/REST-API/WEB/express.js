const express = require("express");
const { SerialPort } = require("serialport");
const { ReadlineParser } = require("@serialport/parser-readline");

const app = express();

let currentData = { score: 0 };

// ⚠️ COM-Port anpassen!
const port = new SerialPort({
  //path: "COM4", // Windows: COM3 | Mac/Linux: /dev/ttyACM0
  path: "COM4", // Windows: COM3 | Mac/Linux: /dev/ttyACM0
  baudRate: 115200
});

// Parser für Zeilen
const parser = port.pipe(new ReadlineParser({ delimiter: "\n" }));

// Daten vom Pico empfangen
parser.on("data", line => {
  try {
    const data = JSON.parse(line);
    currentData = data;
    console.log("Empfangen:", data);
  } catch (e) {
    console.log("Fehler beim Parsen:", line);
  }
});

// API für Webseite
app.get("/data", (req, res) => {
  res.json(currentData);
});

// Webseite
app.get("/", (req, res) => {
  res.sendFile(__dirname + "/index.html");
});

app.listen(3000, () => {
  console.log("Server läuft auf http://localhost:3000");
});

