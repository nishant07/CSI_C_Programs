//it will count the words
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i=0,c=0,l=0;
	char a[25];
	FILE *f;
	f=fopen("teo.txt","r");
	while((a[i]=getc(f))!=EOF)
	{
		while(a[i]!=' ' && a[i]!='\n')
		{
			i++;
			a[i]=getc(f);
		}
		a[i]='\0';
		if(i==4)
		{
			i=0;
			c++;
		}
		else
			i=0;
	}
	printf("%d",c);
	fclose(f);
	getch();
}




