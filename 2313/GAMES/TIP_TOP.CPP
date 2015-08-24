#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void print(int m[3][3])
{
	int i,j,gd=DETECT,gm,mx,my,x,y,x1,y1,a=1;
	char str[4];
	initgraph(&gd,&gm,"D:\\tc\\bgi");
	mx=getmaxx();
	my=getmaxy();
	setlinestyle(0,0,3);
	setcolor(RED);
	line(mx/2-100,116,mx/2+100,116);
	line(mx/2-100,184,mx/2+100,184);
	line((mx/2-34),50,(mx/2-34),250);
	line((mx/2+34),50,(mx/2+34),250);
	settextstyle(0,0,2);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			itoa(a,str,10);
			x=mx/2-67;
			y=83;
			x+=(j*66);
			y+=(i*66);
			outtextxy(x,y,str);
			a++;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     if(m[i][j]==1)
		     {
			setcolor(YELLOW);
			x=(mx/2-100)+33+(j*66);
			y=83+((i)*66);
			circle(x,y,28);
		     }
		     else if(m[i][j]==2)
		     {
			setcolor(GREEN);
			x1=(mx/2-100)+(j*66)+5;
			y1=50+(i*66)+5;
			line(x1,y1,x1+56,y1+56);
			x1=(mx/2-100)+(66*(j+1))-5;
			y1=50+(i*66)+5;
			line(x1,y1,x1-56,y1+56);
		     }
		printf("\n");
		}
	}
}
int scan(int m[3][3],int t)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		if(m[i][0]==m[i][1] && m[i][1]==m[i][2] && m[i][0]!=0)
		{
			printf("\tPlayer %d Wins.",t);
			getch();
			exit(0);
		}
		else if(m[0][i]==m[1][i] && m[1][i]==m[2][i] && m[0][i]!=0)
		{
			printf("\tPlayer %d Wins.",t);
			getch();
			exit(0);
		}
		else if((m[0][0]==m[1][1] && m[1][1]==m[2][2] && m[0][0]!=0) || (m[0][2]==m[1][1] && m[1][1]==m[2][0] && m[0][2]!=0))
		{
			printf("\tPlayer %d Wins.",t);
			getch();
			exit(0);
		}
	}
	return(1);
}

void main()
{
	int i,j,m[3][3]={0},z,c=0,t,ro,co,gd=DETECT,gm,mx,my,p,a=1,x,y;
	char str[40];
	clrscr();
	initgraph(&gd,&gm,"D:\\tc\\bgi");
	mx=getmaxx();
	my=getmaxy();
	setlinestyle(0,0,3);
	setcolor(RED);
	line(mx/2-100,116,mx/2+100,116);
	line(mx/2-100,184,mx/2+100,184);
	line((mx/2-34),50,(mx/2-34),250);
	line((mx/2+34),50,(mx/2+34),250);
	setcolor(RED);
	settextstyle(0,0,2);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			itoa(a,str,10);
			x=mx/2-67;
			y=83;
			x+=(j*66);
			y+=(i*66);
			outtextxy(x,y,str);
			a++;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(c%2==0)
			{
				t=1;
				printf("\n\tPlayer 1's turn.");
			}
			else
			{
				t=2;
				printf("\n\tPlayer 2's turn.");
			}
			printf("\n\tEnter position:");
			scanf("%d",&p);
			switch(p)
			{
				case 1:
					ro=0;
					co=0;
					break;
				case 2:
					ro=0;
					co=1;
					break;

				case 3:
					ro=0;
					co=2;
					break;
				case 4:
					ro=1;
					co=0;
					break;
				case 5:
					ro=1;
					co=1;
					break;
				case 6:
					ro=1;
					co=2;
					break;
				case 7:
					ro=2;
					co=0;
					break;
				case 8:
					ro=2;
					co=1;
					break;
				case 9:
					ro=2;
					co=2;
					break;
			}
			if(m[ro][co]==0)
				m[ro][co]=t;
			else
			{
				printf("\n\tWrong Entery.");
				j--;
				continue;
			}
			print(m);
			z=scan(m,t);
			if(z==1)
				c++;
		}
	}
	if(i==3 && j==3)
		printf("\tDRAW match.");
		getch();
		restorecrtmode();
		closegraph();
}
