#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y;
	char *a={"EMPTY_FILL"};
      initgraph(&gd,&gm,"d:\\tc\\bgi");
	x=getmaxx();
	y=getmaxy();
	setcolor(RED);
//	setfillstyle(SOLID_FILL,GREEN);
  //	floodfill(x-400,y-100,RED);
  setbkcolor(GREEN);
       //	setcolor(RED);
      //	setfillpattern(0*22,WHITE);
	rectangle(x-450,y-350,x-350,y-450);

/*setcolor(GREEN);
	circle(x-400,y-400,50);

	setcolor(MAGENTA);
	setlinestyle(1,50,3);
 //	line(x-400,y-400,x-400+35,y-400+35);
   //	line(x-400,y-400,x-400-35,y-400+35);
     //	line(x-400,y-400,x-400,y-400-50);
	line(x-400-35,y-400+35,x-400,y-400-50);
	line(x-400+35,y-400+35,x-400,y-400-50);
	line(x-400+35,y-400+35,x-400-35,y-400+35);
	setcolor(BLUE);
	putpixel(x-400,y-400,RED); */
//	outtextxy(x-450,y-450,&a);

	getch();
	closegraph();
	restorecrtmode();
}


