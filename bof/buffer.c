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
### Spacial - added printfs to show array contents
*/

#include <stdio.h>
#include <string.h>

int main () 
{
    int array[5] = {1, 2, 3, 4, 5};
    // Changes to see the array
    printf("Showing array contents:\n");
    printf("\t[0]\t[1]\t[2]\t[3]\t[4]\t[5]\t[6]\n");
    printf("\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6]);
}
