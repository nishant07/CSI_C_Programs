#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	FILE *f,*f1;
	clrscr();
	f=fopen("one.txt","a");
	f1=fopen("two.txt","r");
	while((ch=getc(f1))!=EOF)
	{
		putc(ch,f);

	}
	fclose(f);
	fclose(f1);

	getch();
}


