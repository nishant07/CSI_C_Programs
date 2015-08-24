#include<stdio.h>
#include<conio.h>
void main()
{
       long int i;
	char ch;
	FILE *f;
	clrscr();
	f=fopen("abcd.txt","w+");
	while((ch=getchar())!=EOF)
		putc(ch,f);

	for(i=0L;i<26L;i++)
	{
		fseek(f,-i,2);
		ch=getc(f);
		printf("%c",ch);
	}
	fclose(f);
	getch();
}
