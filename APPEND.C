#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[] )
{
	FILE *f,*f1;
	char ch;
	clrscr();
	f=fopen(argv[1],"a");
	f1=fopen(argv[2],"r");
	while((ch=getc(f1))!=EOF)
		putc(ch,f);
	fclose(f);
	fclose(f1);
	getch();
}





