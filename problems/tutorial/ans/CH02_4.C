#include <stdio.h>

int main()
{
int index;

   index = 13;
   printf("The value of the index is %d\n", index);
   index = 27;
   printf("The value of the index is %d\n", index);
   index = 10;
   printf("The value of the index is %d\n", index);
   
   printf("Index is %d\n it still is %d\n it is %d",
                                  index, index, index);
   
   return 0;
}
