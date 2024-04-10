# door_lock
<p align="center">
 <img alt="Languages" src="https://img.shields.io/badge/language-VHDL-blue">
 <img alt="Version" src="https://img.shields.io/badge/version-1.0-blue"/>
  <img alt="Development" src="https://img.shields.io/badge/development-terminated-brightgreen"/>   
</p>

Synchronous machine controlling a door opening.
The controller requires a badge and receives inputs from a keypad having 12 keys (from 0 to 9 plus * and #), the badge can be read from left to right and vice-versa.
In order to open the door, you have to swipe the badge (in a choosen verse) and insert a pin of 4 digits, if the insert code is correct, the door opens and stays open until the badge is swiped in the opposite direction, if the code is incorrect, the user can retry twice before having to swipe the badge again.

# IDEE
The developement has been carried out using Xilix ISE 14.7.

# Modules

Keyboard: It receives as an input a matrix 4x3. Row = "0000" and col = "000" are rappresent the unpressed keys state, when row is not equal to "0000" and col is not equal to "000" a key has been pressed, when both are equal again to "0000" and "000" then a key has been released.

Matrix_2_value

"contatore" (counter)

ROM

Match

Flag

Door lock
