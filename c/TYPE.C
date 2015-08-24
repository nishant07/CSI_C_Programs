#include<stdio.h>
#include<conio.h>
void main(int argc,char	*argv[])
{
	int i;
	FILE *f;
	clrscr();
	f=fopen(argv[1],"w+");
	for(i=2;i<argc;i++)
		fprintf(f,"%s",argv[i]);
	fclose(f);
	getch();
}








