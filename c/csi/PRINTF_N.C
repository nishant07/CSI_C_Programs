#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char ch[]="harshil";
	for(i=0;i<7;i++)
	{
		for (j=0;j<=i;j++)
			printf("%c",ch[j]);
		printf("\n");
	}
	getch();


}