#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y;
      initgraph(&gd,&gm,"d:\\tc\\bgi");
	x=getmaxx();
	y=getmaxy();
	setcolor(RED);
	rectangle(x-450,y-350,x-350,y-450);

	setcolor(GREEN);
	circle(x-400,y-400,50);

  /*	setcolor(MAGENTA);
//	setlinestyle(3,10,1);
 //	line(x-400,y-400,x-400+35,y-400+35);
   //	line(x-400,y-400,x-400-35,y-400+35);
     //	line(x-400,y-400,x-400,y-400-50);
	line(x-400-35,y-400+35,x-400,y-400-50);
	line(x-400+35,y-400+35,x-400,y-400-50);
	line(x-400+35,y-400+35,x-400-35,y-400+35);
//	setcolor(BLUE);
	putpixel(x-400,y-400,RED);    */







	getch();
	closegraph();
	restorecrtmode();
}


