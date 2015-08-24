#include <stdio.h>

int main()
{
int index;

   index = 1;
   do 
   {
      printf("The count is now %2d",index);
      if (index == 3)
         printf(" and is equal to three.");
      if (index == 7)
         printf(" and is equal to seven.");
      printf("\n");
      index = index + 1;
   } while (index < 11);

   return 0;
}



/* Result of execution

The count is now  1
The count is now  2
The count is now  3 and is equal to three.
The count is now  4
The count is now  5
The count is now  6
The count is now  7 and is equal to seven.
The count is now  8
The count is now  9
The count is now  10

*/
