#include<stdio.h>
#include<conio.h>
int fact(int no)
{
	static  int f=1;
	if(no>0)
	{
		f=no*f;
		no--;
		fact(no);
	}
	return(f);
}



void main()
{
	int no,f;
	clrscr();
	printf("\n enter ur fact no:");
	scanf("%d",&no);
	if(no==0)
		printf("fact is 1");
	else if(no<0)
		printf("\nnot valid");
	else
	{
		f=fact(no);
		printf("%d",f);
	}
	getch();
}






