# door_lock
<p align="center">
 <img alt="Languages" src="https://img.shields.io/badge/language-VHDL-blue">
 <img alt="Version" src="https://img.shields.io/badge/version-1.0-blue"/>
  <img alt="Development" src="https://img.shields.io/badge/development-terminated-brightgreen"/>   
</p>

Synchronous machine controlling a door opening.
The controller requires a badge and receives inputs from a keypad having 12 keys (from 0 to 9 plus * and #), the badge can be read from left to right and vice-versa.
In order to open the door, you have to swipe the badge (in a choosen verse) and insert a pin of 4 digits, if the insert code is correct, the door opens and stays open until the badge is swiped in the opposite direction, if the code is incorrect, the user can retry twice before having to swipe the badge again.

