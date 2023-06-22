#ifndef ANSI_ESCAPES_H
#define ANSI_ESCAPES_H

// Moves the cursor around the screen
int move_cur(short dir, short pos) // Takes a direction (represented by a number) and a position
{
   if (dir == 0) // Up
      printf("\033[%dA", pos);
   
   else if (dir == 1) // Left
      printf("\033[%dD", pos);
   
   else if (dir == 2) // Right
      printf("\033[%dC", pos);   
   
   else if (dir == 3) // Down
      printf("\033[%dB", pos);

   else // If dir is not a valid number
      return 1;

   return 0;
}

// Shows/Hides the terminal cursor
int show_cur(short n)
{
   if (n == 0) // Hides cursor
      printf("\e[?25l");

   else if (n == 1) // Shows cursor
      printf("\e[?25h");

   else // If the variable n is neither 0 nor 1
      return 1;

   return 0;
}

// Clears the screen
void clr_scr(void)
{
   printf("\033[2J");
}

// Set attributes (for more info, read the "README.txt" file)
void set_attr(short n)
{
   printf("\033[%dm", n);
}

// Resets ALL attributes
void reset_attr(void)
{
   printf("\033[0m");
}

#endif
