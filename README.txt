This file contains a brief explanation of the functions supplied by the header file.
Each "block/square" in this .txt file is a function.

This library already includes "stdio.h", since it makes the use of the "printf" function.

 ______________________________________________________________________________________________________
| move_cur                                                                                             |
| This function can move the cursor on the terminal screen (note that this is not your mouse cursor).  |
|                                                                                                      |
| It takes 2 arguments:                                                                                |
| 1- The 1st arg is the direction (i.e up, left, right, down).                                         |
|                                                                                                      |
| 0 = up                                                                                               |
| 1 = left                                                                                             |
| 2 = right                                                                                            |
| 3 = down                                                                                             |
|                                                                                                      |
| 2- The 2nd arg is how many chars you want to move in that direction                                  |
|                                                                                                      |
| EX: move_cur(up, 5); // Moves the cursor 5 positions up                                              |
|                                                                                                      |
| It returns 0 if everything goes ok. If you pass a non-valid value, it will return 1.                 |
 \____________________________________________________________________________________________________/
  

 ______________________________________________________________________________________________________
| show_cur                                                                                             |
| This function can hide the cursor, or make it appear again.                                          |
|                                                                                                      |
| It takes 1 argument:                                                                                 |
| 0 = Hide cursor                                                                                      |
| 1 = Show cursor                                                                                      |
|                                                                                                      |
| EX: show_cur(0); // Hides the cursor                                                                 |
|                                                                                                      |
| It returns 0 if everything goes ok. If you pass a non-valid value, it will return 1.                 |
 \____________________________________________________________________________________________________/


 ___________________________________________
| clr_scr                                   |
| This function clears the screen.          |
| It takes no arguments.                    |
| It doesn't return anything.               |
 \_________________________________________/


 _____________________________________________________________________________________________________________________
| set_attr                                                                                                            |
| These are the attributes that you can use with the function "set_attr()".                                           |                     
| The number on the left side can be used as arguments to the function. (i.e "set_attr(3)" will make text italic)     |
| The description of what the argument/number will do is on the right side.                                           |
| It doesn't return anything.                                                                                         |
|                                                                                                                     |
| 0 	   Reset / Normal                                                                                             |
| 1 	   Bold or increased intensity                                                                                |
| 2 	   Faint                                                                                                      |
| 3 	   Italic                                                                                                     |
| 4 	   Underline 	                                                                                              |
| 5 	   Slow Blink                                                                                                 |
| 6 	   Rapid Blink                                                                                                |
| 7 	   [[reverse video]]  (swap foreground and background colors)                                                 |
| 8 	   Conceal                                                                                                    |
| 9 	   Crossed-out                                                                                                |
| 10 	   Primary(default) font 	                                                                              |
| 11–19    Alternate font 	(Select alternate font n-10)                                                          |
| 20 	   Fraktur                                                                                                    |
| 21 	   Bold off or Double Underline                                                                               |
| 22 	   Normal color or intensity                                                                                  |
| 23 	   Not italic, not Fraktur                                                                                    |
| 24 	   Underline off                                                                                              |
| 25 	   Blink off 	                                                                                              |
| 27 	   Inverse off 	                                                                                              |
| 28 	   Reveal 	(conceal off)                                                                                 |
| 29 	   Not crossed out 	                                                                                      |
| 30–37    Set foreground color                                                                                       |
| 38 	   Set foreground color                                                                                       |
| 39 	   Default foreground color                                                                                   |
| 40–47    Set background color                                                                                       |
| 48 	   Set background color                                                                                       |
| 49 	   Default background color                                                                                   |
| 51 	   Framed 	                                                                                              |
| 52 	   Encircled 	                                                                                              |
| 53 	   Overlined 	                                                                                              |
| 54 	   Not framed or encircled 	                                                                              |
| 55 	   Not overlined 	                                                                                      |
| 60 	   ideogram underline                                                                                         |
| 61 	   ideogram double underline                                                                                  |
| 62 	   ideogram overline                                                                                          |
| 63 	   ideogram double overline                                                                                   |
| 64 	   ideogram stress marking                                                                                    |
| 65       ideogram attributes off                                                                                    |
| 90–97    Set bright foreground color                                                                                |
| 100–107  Set bright background color                                                                                |
 \___________________________________________________________________________________________________________________/


 ___________________________________________________
| reset_attr                                        |
| This function resets ALL attributes to default    |
| It doesn't require any arguments                  |
| It doesn't return anything                        |
 \_________________________________________________/
