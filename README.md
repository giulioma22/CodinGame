# CODINGAME SOLUTIONS

Reference puzzles from www.codingame.com  
(Profile: www.codingame.com/profile/6fd26e5ad551969b53d688825dace3397633043)

## :new_moon: Shadows of the Knight - Episode 1 (Solved: 7/7) :heavy_check_mark:

Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

<details>
  <summary>Show more</summary>

### Rules :book:

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

<details>
  <summary>Show more</summary>

### Rules :book:

There is a rectangle of given width w and height h.  
  
On the width side, you are given a list of measurements.  
On the height side, you are given another list of measurements.  
  
Draw perpendicular lines from the measurements to partition the rectangle into smaller rectangles.
  
In all sub-rectangles (include the combinations of smaller rectangles), how many of them are squares?

</details>

## :twisted_rightwards_arrows: Dungeons and Maps (Solved: 6/6) :heavy_check_mark:

You are given N maps for a dungeon. Each map may contain a path to a treasure T, from starting position. Determine the index of the map which holds the shortest path from the starting position to T, but be careful a map may lead you to a TRAP.

<details>
  <summary>Show more</summary>

### Rules :book:

A path is marked on the map with ^, v, <, > symbols, each corresponding to UP, DOWN, LEFT, RIGHT directions respectively, i.e. each symbol shows you the next cell to move on.  
  
A valid path must start from [ startRow; startCol ] and end on T.  
  
The path length is the count of direction symbols plus 1, for the T cell.

</details>

## :page_with_curl: 1D Spreadsheet (Solved: 13/13) :heavy_check_mark:

You are given a 1-dimensional spreadsheet. You are to resolve the formulae and give the value of all its cells.<br>
<br>
Each input cell's content is provided as an operation with two operands arg1 and arg2.

<details>
  <summary>Show more</summary>

### Rules :book:

There are 4 types of operations:<br>
__VALUE__ arg1 arg2: The cell's value is arg1, (arg2 is not used and will be "_" to aid parsing).<br> 
__ADD__ arg1 arg2: The cell's value is arg1 + arg2.<br>
__SUB__ arg1 arg2: The cell's value is arg1 - arg2.<br>
__MULT__ arg1 arg2: The cell's value is arg1 × arg2.<br>
<br>
Arguments can be of two types:<br>
• __Reference__ $ref: If an argument starts with a dollar sign, it is a interpreted as a reference and its value is equal to the value of the cell by that number ref, 0-indexed.  
For example, "$0" will have the value of the result of the first cell.  
Note that a cell can reference a cell after itself!  
  
• __Value__ val: If an argument is a pure number, its value is val.  
For example: "3" will have the value 3.  
  
There won't be any cyclic references: a cell that reference itself or a cell that references it, directly or indirectly.

</details>

## :unlock: Encryption/Decryption of Enigma Machine (Solved: 6/6) :heavy_check_mark:

During World War II, the Germans were using an encryption code called Enigma – which was basically an encryption machine that encrypted messages for transmission. The Enigma code went many years unbroken.

<details>
  <summary>Show more</summary>

### Rules :book:

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

## :1234: Sudoku Validator (Solved: 7/7) :heavy_check_mark:

Check if a given Sudoku was correctly filled or not.<br>

<details>
  <summary>Show more</summary>

### Rules :book:

A sudoku grid consists of 9×9 = 81 cells split in 9 sub-grids of 3×3 = 9 cells.<br>
For the grid to be correct, each row must contain one occurrence of each digit (1 to 9), each column must contain one occurrence of each digit (1 to 9) and each sub-grid must contain one occurrence of each digit (1 to 9).<br>
<br>
You shall answer true if the grid is correct or false if it is not.<br>

</details>

## :mag: Detective Pikaptcha EP1 (Solved: 8/8) :heavy_check_mark:

Detective Pikaptcha is investigating a disturbance in the spacetime continuum. It seems a powerful pokébot is being used to warp space around our hero to keep him trapped. Help him map his surroundings in order to escape and uncover the culprit!<br>
<br>
Your objective is to write a program that will compute, for each cell of a grid, the number of adjacent passages.

<details>
  <summary>Show more</summary>

### Rules :book:

You're given a grid filled with 0 and #, where 0 represents a passage, and # represents a wall: an impassable cell.<br>
<br>
We're considering the 4-adjacency, meaning a cell has a maximum of 4 adjacent cells (a diagonal cell is not adjacent).<br>
<br>
You must analyze the given grid and return it with a small transformation: for each empty cell, instead of a 0, you must return the number of its adjacent passable cells. For each impassable cell, you change nothing: you still return #.

</details>