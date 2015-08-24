#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int dice()
{
	int d;
	float x;
	x=rand();
	x/=32768.0;
	d=1+(int)(12*x);
	return(d);
}
void check(int d,int *t)
{
	char c;
	int d1;
	if(d==7 || d==11)
	{
		printf("\n-----Winner-----");
		*t=0;
	}
	else if(d==2 || d==3 || d==12)
	{
		printf("\n-----Loser-----");
		*t=0;
	}
	else
	{
		d1=d;
		while(d!=7 && d!=11)
		{
			printf("\nThrow again or quit.");
			fflush(stdin);
			scanf("%c",&c);
			if(c=='a')
			{
				d=dice();
				printf("\nYou got %d",d);
				if(d1==d)
				{
					printf("\n-----Winner-----");
					*t=0;
					break;

				}
				else if(d==7 || d==11)
				{
					printf("\n-----Loser-----");
					*t=0;
				}
			}
		if((int)c==27)
			exit(0);
		}
	}
}
void main()
{
	int d,t=0;
	char c;
	clrscr();
	while(1)
	{
		printf("\n-----Press enter to throw dice.----------");
		printf("\n-------Press esc to quit.--------");
		fflush(stdin);
		scanf("%c",&c);
		if(c==27)
			exit(0);
		else if(c=='a')
		{
			d=dice();
			printf("\nYou got %d",d);
			check(d,&t);
		}
		printf("\nDo you want to continue?(y/n)");
		fflush(stdin);
		scanf("%c",&c);
		if(c=='n')
			exit(0);
	}
	getch();
}




