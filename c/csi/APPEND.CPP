//use of command line in appendig of some files
#include<stdio.h>

#include<conio.h>
void main(int argc,char *argv[])
{
	char ch;
	FILE *s,*d;
	s=fopen(argv[1],"a");
	d=fopen(argv[2],"r");
	while((ch=getc(d))!=EOF)
		putc(ch,s);
	fclose(s);
	fclose(d);
	getch();
}






