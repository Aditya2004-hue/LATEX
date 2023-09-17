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
    - karnaugh-map
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
bash
$ git clone https://github.com/Aditya2004-hue/LATEX.git


### Using [PlatformIO IDE](https://platformio.org/platformio-ide)
1. Download IDE from https://platformio.org/platformio-ide
2. Open the [ide/codes](ide/codes) folder
3. Connect Arduino
4. Build and Run

### Using Terminal with [PlatformIO Core](https://github.com/platformio/platformio-core)
1. Install PlatformIO Core CLI by following instructions from [here](https://platformio.org/install/cli)
2. Navigate to [/ide/codes](ide/codes)
3. Connect Arduino
4. Run:
bash
$ pio run --target upload
