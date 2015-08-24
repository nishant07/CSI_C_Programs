//this is not true c programm
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j;
	char c1[50];
	FILE *f;
	clrscr();
	printf("encrypt =\n");

	f=fopen("one.txt","r");
	while(!feof(f))
	{
		c1[i]=getc(f)+12;
		printf("%c",c1[i]);
		i++;
	}
	i--;
	c1[i]='\0';
	fclose(f);
	printf("\ndecrypt =\n");
	f=fopen("one.txt","w");
	for(j=0;c1[j]!='\0';j++)
		putc(c1[j],f);
	rewind(f);
	for(j=0;c1[j]!='\0';j++)
	{
		c1[j]-=38;
		putc(c1[j],f);
		printf("%c",c1[j]);
	}
	fclose(f);
	getch();
}




