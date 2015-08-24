#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void conv(int no,int base);
void main()
{
	int base,no;
	clrscr();
	printf("\n enter any no");
	scanf("%d",&no);
	printf("\n enter the base");
	scanf("%d",&base);
	conv(no,base);
	getch();
}
void conv(int no,int base)
{
       int r;
       char a[100];
       if(base==2 || base==8)
       {
		if(no>0)
		{
			r=no%base;
			no=no/base;
			conv(no,base);
			printf("%d",r);
		}
       }
       else if(base==16)
       {
		if(no!=0)
		{
			r=no%16;
			no=no/16;
			conv(no,base);
		if(r<=9)
		  printf("%c",r+48);
		 else
		 printf("%c",r+55);

		}
       }
}










