# LATEXCS2002
GATEQ-2022 IN Q21
# Digital Design through Arduino
-----------------------------
Code and Documentation of final GATE Question Implementation for Digital Design with Arduino Workshop
QUESTION 21, GATE 2021-Q21
- https://github.com/Aditya2004-hue/LATEX/tree/main/latex_documentation
- https://github.com/Aditya2004-hue/LATEX/blob/main/codes/gate.ino
  
---
## Dependencies
- PlatformIO
    - Core[CLI]
- LaTeX
    - enumitems
    - listings
    - amsmath
    - graphicx
    - titlesec
    - tabularx
    - mathtools
    - geometry
    - hyperref
---
## Build and Run
$ git clone https://github.com/Aditya2004-hue/LATEX.git
1. Download IDE from https://platformio.org/platformio-ide
2. Install PlatformIO Core CLI by following instructions from [here](https://platformio.org/install/cli)
3. Open the [ide/codes](ide/codes) folder
4. Build and compile -
        *-- Create a Folder and put platform.ini file in that folder.
         -- Now create a folder name (src) in same folder you pasted the platformio.ini file and then  put code.ino file inside the src folder.
         -- Enter the directory of the folder where you have created platformio.ini and src using commmand cd. in the terminal.
         -- Enter the command (pio run).
         -- connect arduino and then upload the code using command (pio run -t upload).
