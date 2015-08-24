#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"d:\\tc\\bgi");
	x=getmaxx();
	y=getmaxy();
	setcolor(WHITE);
	circle(x/5,y/5,60);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x/5+100,y/5+100,RED);
    /*	setfillstyle(SOLID_FILL,BLUE);
	floodfill(x/5,y/5,BLUE); */
	setcolor(BLUE);
	circle(x/5-20,y/5-20,3);
	circle(x/5-20+40,y/5-20,3);
	setcolor(GREEN);
	line(x/5,y/5,x/5,y/5+6);
	setcolor(MAGENTA);
	arc(x/5,y/5+35,220,320,10);
      //  arc(x/5+100,y/5+100,200,340,50);

	getch();
	closegraph();
	restorecrtmode();
}