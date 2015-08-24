#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	FILE *f;
	long  i;
	clrscr();
	f=fopen("new.txt","w+");
	while((ch=getchar())!=EOF)
		putc(ch,f);
	for(i=1;i<=26;i++)
	{
		fseek(f,-i,2);
		ch=getc(f);
		printf("%c",ch);
	}
	fclose(f);
	getch();





}