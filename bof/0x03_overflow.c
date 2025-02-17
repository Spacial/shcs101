/*
Based on:
The Shellcoder's Handbook: Discovering and Exploiting Security Holes
Jack Koziol, David Litchfield, Dave Aitel, Chris Anley, 
Sinan Eren, Neel Mehta, Riley Hassell
Publisher: John Wiley & Sons
ISBN: 0764544683

Chapter 2: Stack Overflows
Sample Program #1

Please send comments/feedback to jack@infosecinstitute.com or visit http://www.infosecinstitute.com 

#### Changelog:
### Spacial - added int to main
*/

#include <stdio.h>
#include <string.h>


// x0040116c
void return_input (void) { 
   char array[30]; 

   gets (array); 
   printf("%s\n", array); 
}


int main() { 
   return_input(); 

   return 0; 
}
