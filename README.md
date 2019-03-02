# ndless Modular Arithmetic (ndm-modular-arithmetic)
A small program to perform modular arithmetic on TI-nspire calculators with ndless. This functionality already exists within the native OS, I wrote this to get used to the SDK.
## Setup
1. Install the ndless framework onto your nspire calculator using the [TI-Planet guide](tiplanet.org/ndless).
2. Make sure the ndless framework is loaded (identified by green text in the top left saying "Ndless installed").
3. Download the ".tns" file from the releases page and use the computer link software to copy the file to the calculator.
4. Run the file from the Documents browser.
## Usage
1. Enter the number you wish to perform the operation on and press 'enter'.
2. Enter the mod value you wish to use and press 'enter'.
3. The final result will be printed. At this point, the user can press 'space' to reset and enter a new set of numbers or 'esc' to exit the program.
## Building
1. Download and compile the ndless SDK and toolchain by following the [hackspire guide](https://hackspire.org/index.php/C_and_assembly_development_introduction).
2. Clone this repository and run `make` to compile.
3. Copy the resulting `ndm-modular-arithmetic.tns` file to the calculator.