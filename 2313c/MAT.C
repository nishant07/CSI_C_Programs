#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,m[4][5],mc[4][5];
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("\nEnter no.[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	printf("Matrix is:-\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
			mc[i][j+3]=m[i][j];
	}
	for(i=0;i<4;i++)
	{
		for(j=2;j<5;j++)
			mc[i][j-2]=m[i][j];
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",mc[i][j]);
		}
		printf("\n");
	}
	getch();
}