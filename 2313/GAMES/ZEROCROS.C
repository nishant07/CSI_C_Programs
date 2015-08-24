#include<stdio.h>
#include<conio.h>
#include<string.h>
void print(char m[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%c ",m[i][j]);
		printf("\n");
	}
}
int scan(char m[3][3])
{
	int i,j;

	for(i=0;i<3;i++)
	{
			if(m[i][0]==m[i][1] && m[i][1]==m[i][2] && m[i][0]!='-' && m[i][1]!='-' && m[i][2]!='-')
			{
				printf("Player %c is the winner",m[i][0]);
				getch();
				exit();
				return(0);
			}
			else if(m[0][i]==m[1][i] && m[1][i]==m[2][i]  && m[0][i]!='-' && m[1][i]!='-')
			 {
				printf("Player %c is the winner",m[0][i]);
				getch();
				exit();
				return(0);
			}
			else if(((m[0][0]==m[1][1]&&m[1][1]==m[2][2])&&m[0][0]!='-')||((m[0][2]==m[1][1]&&m[1][1]==m[2][0])&&m[0][2]!='-'))
			{
				printf("Player %c is the winner,",m[1][1]);
				getch();
				exit();
				return(0);
			}
	}
	return(1);
}
void main()
{
	int p1,p2,i,j,c=1,ro,co,z;
	char m[3][3],t;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			m[i][j]='-';
	}
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			if((c%2)==0)
			{
				printf("Player-2's turn---");
				t='2';
			}
			else
			{
				printf("Player-1's turn---");
				t='1';
			}
			printf("Enter position.");
			fflush(stdin);
			scanf("%d%d",&ro,&co);
			if(m[ro][co]=='-')
				m[ro][co]=t;
			else
			{
				printf("\n There is alredy a number.");
				j--;
				continue;
			}
			print(m);
			z=scan(m);
			if(z==1)
				c++;
		}
	}
	if(i==3 && j==3)
		printf("Draw match");
getch();
}
