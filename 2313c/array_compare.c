#include<stdio.h>
#include<conio.H>
void main()
{
	int ch=0;
	char i,j;
		FILE *f,*f1;
   f=fopen("one.txt","r");
   f1=fopen("two.txt","r");
   while(feof(f)!=0 &&feof(f1)!=0)
   {
   	fscanf(f,"%c",&i);
   	fscanf(f1,"%c",&j);
   	if(i!=j)
      {
      	ch==1;
         break;
      }
   }
   if(ch==0)
   	printf("%d",ch);
   else
   	printf("%d",ch);
   getch();
}




