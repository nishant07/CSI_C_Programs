#include<stdio.h>
#include<conio.h>
void main()
{
	int x1,x2,i,j,x,f;
   clrscr();


      printf("\n enter no1:");
   scanf("%d",&x1);
      printf("\n enter no2:");
   scanf("%d",&x2);
   if(x1>x2)
   {
   	x=x1;
      x1=x2;
      x2=x;
   }
   for(i=x1+1;i<x2;i++)
   {
      f=0;
   	for(j=2;j<i;j++)
      {
      	if((i%j)==0)
         {
         	f=1;
            break;
         }
       }
       if (f==0)
	        printf("%d ",i);
	}
   getch();
}
