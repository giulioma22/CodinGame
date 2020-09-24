# CODINGAME SOLUTIONS

Reference puzzles from www.codingame.com  
(Profile: codingame.com/profile/6fd26e5ad551969b53d688825dace3397633043)

## :new_moon: Shadows of the Knight - Episode 1 (Solved: 7/7) :heavy_check_mark:

Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

### Rules :book:

<details>
  <summary>Show</summary>

Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position:  
  
U (Up)  
UR (Up-Right)  
R (Right)  
DR (Down-Right)  
D (Down)  
DL (Down-Left)  
L (Left)  
UL (Up-Left)  

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

</details>

## :black_square_button: Rectangle Partition (Solved: 9/9) :heavy_check_mark:

Calculate the number of squares in a partitioned rectangle.

### Rules :book:

<details>
  <summary>Show</summary>

There is a rectangle of given width w and height h.  
  
On the width side, you are given a list of measurements.  
On the height side, you are given another list of measurements.  
  
Draw perpendicular lines from the measurements to partition the rectangle into smaller rectangles.
  
In all sub-rectangles (include the combinations of smaller rectangles), how many of them are squares?

</details>

## :twisted_rightwards_arrows: Dungeons and Maps (Solved: 6/6) :heavy_check_mark:

You are given N maps for a dungeon. Each map may contain a path to a treasure T, from starting position. Determine the index of the map which holds the shortest path from the starting position to T, but be careful a map may lead you to a TRAP.

### Rules :book:

<details>
  <summary>Show</summary>

A path is marked on the map with ^, v, <, > symbols, each corresponding to UP, DOWN, LEFT, RIGHT directions respectively, i.e. each symbol shows you the next cell to move on.  
  
A valid path must start from [ startRow; startCol ] and end on T.  
  
The path length is the count of direction symbols plus 1, for the T cell.

</details>

## :page_with_curl: 1D Spreadsheet (Solved: 13/13) :heavy_check_mark:

You are given a 1-dimensional spreadsheet. You are to resolve the formulae and give the value of all its cells.  
  
Each input cell's content is provided as an operation with two operands arg1 and arg2.

### Rules :book:

<details>
  <summary>Show</summary>

There are 4 types of operations:  
VALUE arg1 arg2: The cell's value is arg1, (arg2 is not used and will be "_" to aid parsing).  
ADD arg1 arg2: The cell's value is arg1 + arg2.  
SUB arg1 arg2: The cell's value is arg1 - arg2.  
MULT arg1 arg2: The cell's value is arg1 × arg2.  
  
Arguments can be of two types:  
• __Reference__ $ref: If an argument starts with a dollar sign, it is a interpreted as a reference and its value is equal to the value of the cell by that number ref, 0-indexed.  
For example, "$0" will have the value of the result of the first cell.  
Note that a cell can reference a cell after itself!  
  
• __Value__ val: If an argument is a pure number, its value is val.  
For example: "3" will have the value 3.  
  
There won't be any cyclic references: a cell that reference itself or a cell that references it, directly or indirectly.

</details>

## :unlock: Encryption/Decryption of Enigma Machine (Solved: 6/6) :heavy_check_mark:

During World War II, the Germans were using an encryption code called Enigma – which was basically an encryption machine that encrypted messages for transmission. The Enigma code went many years unbroken.

### Rules :book:

<details>
  <summary>Show</summary>

Here's How the basic machine works:<br>
<br>
First Caesar shift is applied using an incrementing number:<br>
If String is AAA and starting number is 4 then output will be EFG.<br>
A + 4 = E<br>
A + 4 + 1 = F<br>
A + 4 + 1 + 1 = G<br>
<br>
Now map EFG to first ROTOR such as:<br>
ABCDEFGHIJKLMNOPQRSTUVWXYZ<br>
BDFHJLCPRTXVZNYEIWGAKMUSQO<br>
So EFG becomes JLC. Then it is passed through 2 more rotors to get the final value.<br>
<br>
If the second ROTOR is AJDKSIRUXBLHWTMCQGZNPYFVOE, we apply the substitution step again thus:<br>
ABCDEFGHIJKLMNOPQRSTUVWXYZ<br>
AJDKSIRUXBLHWTMCQGZNPYFVOE<br>
So JLC becomes BHD.<br>
<br>
If the third ROTOR is EKMFLGDQVZNTOWYHXUSPAIBRCJ, then the final substitution is:<br>
ABCDEFGHIJKLMNOPQRSTUVWXYZ<br>
EKMFLGDQVZNTOWYHXUSPAIBRCJ<br>
So BHD becomes KQF.<br>
<br>
Final output is sent via Radio Transmitter.<br>

</details>