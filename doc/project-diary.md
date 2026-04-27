# Project Diary - `Moser`

## 23.2.2026(Day1):
- Creating a concept/Milestones/... (organisational matters) for the project

## 2.3.2026(Day2):
- Distribution of tasks
- Used-AI: `ChatGPT` --> **"Welche Bibliotheken gibt es für RasperryPi (Pico) in C?"**
- Started with first trys on WOKWI
- Abspeicherung WOKWI
![Bild1](assets/image.png)  


## 9.3.2026(Day3):
- Prototype solution on Pico W + Arduino (TODO: Why does the blueLED not completely turn off)
- Completion of Website by Marcel  

## 20.04.2026(Day4):
- Created a timer for the Arduino-Sketch
- Used-AI: `ChatGPT`:
    - Wie kann ich konkret von einem Pico W Daten zu einer Website schicken (einen int z.B.)?
    - Konkret, braucht die Website eine Rest-API, und ich auch?
    - Hier ist mein Arduino-Sketch: **mein Sketch** wie geht es jetzt weiter?
    - Wie würde man jetzt aber für den Server in diesem Sketch weitermachen (was muss er können)?
    - Wie kann ich einen Timer machen? Also alle 5 Sekunden leuchtet blau für 3 Sekunden auf und das ganze 15 Sekunden lang.
    - Wie kann ich in der Arduinokonsole ausgeben? 

## 27.04.2026(Day 5): 
- Serial interface -> Pico communicates its Data to the Website
- Server puts the Data correct onto the Website


TODO: Implement the Logic into the Sketch, prevent the counter from increasing by itself, put the Data correct on the REAL Website (P.S.: WE USE THE `analogue_Version` for the Pico), put all used AI-Prompts here