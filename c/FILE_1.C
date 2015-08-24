#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20],ch;
	FILE *f;
	clrscr();
	printf("\n enter  file name ");
	scanf("%s",a);
	f=fopen(a,"w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,f);
	}
	fclose(f);
	printf("File contents=");
	f=fopen(a,"r");
	while((ch=getc(f))!=EOF)
	{
		putchar(ch);
	}
	fclose(f);
	getch();
}
