#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,line=1,c=1,w=1;
	FILE *f;
	clrscr();
	f=fopen("one.txt","r");
	while((ch=getc(f))!=EOF)
	{
		c++;
		if(ch=='\n')
			line++;
		if (ch==' ' || ch=='\n')
			w++;
	}
	fclose(f);
	printf("\n char=%d;\n words=%d;\n lines=%d",c-line,w,line);
	getch();
}


