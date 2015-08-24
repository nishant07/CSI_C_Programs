#include<stdio.h>
#include<conio.h>
void main(int argc,char*argv[])
{
	char c;
	FILE *s,*d;
	clrscr();
	s=fopen(argv[1],"r");
	d=fopen(argv[2],"w");
	while((c=getc(s))!=EOF)
	{
		putc(c,d);
	}
	fclose(s);
	fclose(d);
	getch();
}
