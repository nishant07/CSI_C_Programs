#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	long i;
	FILE *f;
	clrscr();
	f=fopen("abcd.txt","w");
	while((ch=getchar())!='*')
	{
		putc(ch,f);
	}
	fclose(f);
	f=fopen("abcd.txt","r");
	i=5;
	while((ch=getc(f))!=EOF)
	{
		printf("%c",ch);
		fseek(f,5L,1);
	}
	fclose(f);
	getch();
}



