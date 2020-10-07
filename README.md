# CODINGAME SOLUTIONS

Reference puzzles from www.codingame.com  
(Profile: www.codingame.com/profile/6fd26e5ad551969b53d688825dace3397633043)

## :space_invader: Skynet Revolution - Episode 2 (Solved: 6/6) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Skynet is responding to your intrusion and has activated additional defenses:<br>
- Most of the links have been reinforced: your virus no longer has the possibility to destroy a link between two ordinary nodes, it can now only sever links leading to gateways. If it attempts to cut a link between two ordinary nodes it will be detected and deleted.<br>
- Nodes may now be connected to up to two gateways!<br>
<br>
There are six new tests to pass in this final confrontation.<br>
<br>

__Recap:__<br>
<br>
Your virus has caused a backdoor to open on the Skynet network enabling you to send new instructions in real time.<br>
<br>
You decide to take action by stopping Skynet from communicating on its own internal network.<br>
<br>
Skynet's network is divided into several smaller networks, in each sub-network is a Skynet agent tasked with transferring information by moving from node to node along links and accessing gateways leading to other sub-networks.<br>
<br>
Your mission is to reprogram the virus so it will sever links in such a way that the Skynet Agent is unable to access another sub-network thus preventing information concerning the presence of our virus to reach Skynet's central hub.

### Rules :book:

For each test you are given:<br>
- A map of the network.<br>
- The position of the exit gateways.<br>
- The starting position of the Skynet agent.<br>
<br>

__Note:__ Nodes can only be connected to up to a single gateway.<br>
<br>
Each game turn:<br>
- First off, you sever one of the given links in the network.<br>
- Then the Skynet agent moves from one Node to another accessible Node.<br>

</details>

## :bat: Shadows of the Knight - Episode 1 (Solved: 7/7) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

### Rules :book:

Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position:<br>
<br>
U (Up)<br>
UR (Up-Right)<br>
R (Right)<br>
DR (Down-Right)<br>
D (Down)<br>
DL (Down-Left)<br>
L (Left)<br>
UL (Up-Left)<br>
<br>
Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.<br>
<br>
Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

</details>

## :space_invader: Skynet Revolution - Episode 1 (Solved: 4/4) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Your virus has caused a backdoor to open on the Skynet network enabling you to send new instructions in real time.<br>
<br>
You decide to take action by stopping Skynet from communicating on its own internal network.<br>
<br>
Skynet's network is divided into several smaller networks, in each sub-network is a Skynet agent tasked with transferring information by moving from node to node along links and accessing gateways leading to other sub-networks.<br>
<br>
Your mission is to reprogram the virus so it will sever links in such a way that the Skynet Agent is unable to access another sub-network thus preventing information concerning the presence of our virus to reach Skynet's central hub.

### Rules :book:

For each test you are given:<br>
- A map of the network.<br>
- The position of the exit gateways.<br>
- The starting position of the Skynet agent.<br>
<br>

__Note:__ Nodes can only be connected to up to a single gateway.<br>
<br>
Each game turn:<br>
- First off, you sever one of the given links in the network.<br>
- Then the Skynet agent moves from one Node to another accessible Node.<br>

</details>

## :spoon: There is no Spoon - EP1 (Solved: 8/8) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
The game is played on a rectangular grid with a given size. Some cells contain power nodes. The rest of the cells are empty.<br>
<br>
The goal is to find, when they exist, the horizontal and vertical neighbors of each node.

### Rules :book:

To do this, you must find each (x1,y1) coordinates containing a node, and display the (x2,y2) coordinates of the next node to the right, and the (x3,y3) coordinates of the next node to the bottom within the grid.<br>
<br>
If a neighbor does not exist, you must output the coordinates -1 -1 instead of (x2,y2) and/or (x3,y3).<br>
<br>
You lose if:<br>
- You give an incorrect neighbor for a node.<br>
- You give the neighbors for an empty cell.<br>
- You compute the same node twice.<br>
- You forget to compute the neighbors of a node.

</details>

## :vertical_traffic_light: Traffic Lights (ANEO Sponsored Puzzle) (Solved: 10/10) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
You enter a section of road and you plan to rest entirely on your cruise control to cross the area without having to stop or slow down.<br>
<br>
The goal is to find the maximum speed (off speeding) that will allow you to cross all the traffic lights to green.<br>
<br>
Warning: You can not cross a traffic light the second it turns red!<br>
<br>
Your vehicle enters the zone directly at the speed programmed on the cruise control which ensures that it does not change anymore.

### Rules :book:

You are given the following:<br>
- An integer speed for the maximum speed allowed on the portion of the road (in km/h).<br>
- An integer lightCount for the number of traffic lights on the road.<br>
- lightCount next lines:<br>
  - An integer distance representing the distance of the traffic light from the starting point (in meters).<br> 
  - An integer duration representing the duration of the traffic light on each color.<br>
A traffic light alternates a period of duration seconds in green and then duration seconds in red.<br>
All traffic lights turn green at the same time as you enter the area.<br>

</details>

## :page_with_curl: 1D Spreadsheet (Solved: 13/13) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
You are given a 1-dimensional spreadsheet. You are to resolve the formulae and give the value of all its cells.<br>
<br>
Each input cell's content is provided as an operation with two operands arg1 and arg2.

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

## :mag: Detective Pikaptcha EP1 (Solved: 8/8) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Detective Pikaptcha is investigating a disturbance in the spacetime continuum. It seems a powerful pokébot is being used to warp space around our hero to keep him trapped. Help him map his surroundings in order to escape and uncover the culprit!<br>
<br>
Your objective is to write a program that will compute, for each cell of a grid, the number of adjacent passages.

### Rules :book:

You're given a grid filled with 0 and #, where 0 represents a passage, and # represents a wall: an impassable cell.<br>
<br>
We're considering the 4-adjacency, meaning a cell has a maximum of 4 adjacent cells (a diagonal cell is not adjacent).<br>
<br>
You must analyze the given grid and return it with a small transformation: for each empty cell, instead of a 0, you must return the number of its adjacent passable cells. For each impassable cell, you change nothing: you still return #.

</details>

## :mag: Detective Pikaptcha EP2 (Solved: 8/8) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Thanks to your help, Detective Pikaptcha was able to get a sense of where he was trapped: a space-warp maze! Pikaptcha knows well that a space-warp maze has no visible exit; he must find his own way.<br>
<br>
“Time to test a good old trick and see what happens: follow a wall and keep a count for each cell of how many times I stepped into it.”<br>
<br>
Your objective is to write a program that will compute, for each cell of a maze, the number of times Pikaptcha will step into the cell by following a wall until he reaches his original location.<br>

### Rules :book:

The maze is given to you as a grid filled with 0s and #s, where 0 represents a passage, and # represents a wall: an impassable cell.<br>
The initial position and direction of Pikaptcha is given to you in the grid as a special character:<br>
__>__: facing right<br>
__v__: facing down<br>
__<__: facing left<br>
__^__: facing up<br>
An additional character indicates which wall Pikaptcha must follow:<br>
__R__ for the wall on his right<br>
__L__ for the wall on his left<br>
We’re considering the 4-adjacency, meaning a cell has a maximum of 4 adjacent cells (a diagonal cell is not adjacent).<br>
<br>
You must analyze the given maze and return it with a small transformation: for each empty cell, instead of a 0, you must return the number of times Pikaptcha stepped into that cell while striding along the maze, following a wall. For each impassable cell, you change nothing: you still return #.

</details>

## :world_map: Dungeons and Maps (Solved: 6/6) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
You are given N maps for a dungeon. Each map may contain a path to a treasure T, from starting position. Determine the index of the map which holds the shortest path from the starting position to T, but be careful a map may lead you to a TRAP.

### Rules :book:

A path is marked on the map with ^, v, <, > symbols, each corresponding to UP, DOWN, LEFT, RIGHT directions respectively, i.e. each symbol shows you the next cell to move on.<br>
<br>
A valid path must start from [ startRow; startCol ] and end on T.<br>
<br>
The path length is the count of direction symbols plus 1, for the T cell.

</details>

## :unlock: Encryption/Decryption of Enigma Machine (Solved: 6/6) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
During World War II, the Germans were using an encryption code called Enigma – which was basically an encryption machine that encrypted messages for transmission. The Enigma code went many years unbroken.

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

## :candle: Lumen (Solved: 9/9) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>

THEY put you in a square shape room, with N meters on each side.<br>
THEY want to know everything about you.<br>
THEY are observing you.<br>
THEY placed some candles in the room.<br>

### Rules :book:

Every candle makes L "light" in the spot they are, and every spot in square shape gets one less "light" as the next ones. If a spot is touched by two candles, it will have the larger "light" it can have. Every spot has the base light of 0.<br>
<br>
You can hide only, if you find a dark spot which has 0 "light". How many dark spots you have?<br>
<br>
You will receive a map of the room, with the empty places (X) and Candles (C) in N rows, each character separated by a space.<br>
<br>
Example for the light spread N = 5, L = 3:<br>
<br>
X X X X X<br>
X C X X X<br>
X X X X X<br>
X X X X X<br>
X X X X X<br>
<br>
2 2 2 1 0<br>
2 3 2 1 0<br>
2 2 2 1 0<br>
1 1 1 1 0<br>
0 0 0 0 0<br>

</details>

## :diamond_shape_with_a_dot_inside: Rectangle Partition (Solved: 9/9) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Calculate the number of squares in a partitioned rectangle.

### Rules :book:

There is a rectangle of given width w and height h.<br>
<br>
On the width side, you are given a list of measurements.<br>
On the height side, you are given another list of measurements.<br>
<br>
Draw perpendicular lines from the measurements to partition the rectangle into smaller rectangles.<br>
<br>
In all sub-rectangles (include the combinations of smaller rectangles), how many of them are squares?

</details>

## :1234: Sudoku Validator (Solved: 7/7) :heavy_check_mark:

<details>
  <summary>Show more</summary>
<br>
Check if a given Sudoku was correctly filled or not.<br>

### Rules :book:

A sudoku grid consists of 9×9 = 81 cells split in 9 sub-grids of 3×3 = 9 cells.<br>
For the grid to be correct, each row must contain one occurrence of each digit (1 to 9), each column must contain one occurrence of each digit (1 to 9) and each sub-grid must contain one occurrence of each digit (1 to 9).<br>
<br>
You shall answer true if the grid is correct or false if it is not.<br>

</details>