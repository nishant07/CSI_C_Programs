#include<stdio.h>
#include<conio.h>
void main()
{
	int i,ch;
   char a[5][20];
   char **s;
   clrscr();
   printf("Enter how many names u want to enter:");
   scanf("%d",&ch);
   for(i=0;i<ch;i++)
   {
   	printf("Enter name%d:",i+1);
      scanf("%s",*(s+i));
   }
   printf("\n===============\n");
   for(i=0;i<ch;i++)
   {
   	printf("\n name=%s:",*(s+i));

   }
   getch();
}





















