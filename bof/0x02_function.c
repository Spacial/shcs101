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
## Spacial: added void to main, so new gcc wont complain
*/

#include <stdio.h>
#include <string.h>



void function(int a, int b){
   int array[5];
}

void main() {
   function(1, 2);

   printf("This is where the return address points");
}