#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	char play1[10];
	int mst=21,plmv,cpmv;
	int gd=DETECT,gm=1;
	clrscr();
	initgraph(&gd,&gm,"d:\\TC\\BGI");
	setcolor(2);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(90,50,"A MATCH-STICK GAME");
	setcolor(12);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(30,170,"[1] There are 21 matchsticks.");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(30,190,"[2] The computer asks the player to pick 1,2,3 or 4 matchsticks.");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(30,210,"[3] After the user picks, the computer doed its picking.");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(30,230,"[4] Whoever is forced to pick up the last matchstick loses game.");
	printf("\n\n\n\n\n\n\n");
	printf("\n\t\tEnter name of player:");
	gets(play1);
	clrscr();
	cleardevice();
	while(1)
	{
		lbl:
		printf("\n\t................................");
		printf("\n\tThere are %d matchstick",mst);
		printf("\n\tPick your matchstick%s [max. 4]: ",play1);
		scanf("%d",&plmv);
		if(plmv >= 1 && plmv <= 4)
		{
			mst=mst-plmv;
		}
		else
		{
			printf("\n\t\tError : Wrong Pick..............Try Again");
			getch();
			goto lbl;
		}
		cpmv= 11 - plmv;
		printf("\n\tComputer Picks %d Matchsticks",cpmv);
		mst= mst - cpmv;
		if(mst==1)
		{
			printf("\n\n\t\t**********************");
			printf("\n\t\tYou have lost the game %s.............",play1);
			printf("\n\t\t************************");
			getch();
			break;
		}

	}
	closegraph();
	getch();
}
