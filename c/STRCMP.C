#include<stdio.h>
#include<conio.h>
#include<string.h>
int com(char a[],char b[]);

void main()

{
	char a[10],b[10];
	int n;
	clrscr();
	gets(a);
	gets(b);
	com(a,b);
	n=com(a,b);
	printf("Difference is:%d",n);
	getch();
}

int com(char a[10],char b[10])
{
	int i,j;
	for (i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if (a[i]!=b[i])
		return(a[i]-b[i]);
	}
if (a[i]!='\0')
return (a[i]);
else if(b[i]!='\0')
return(b[i]);
else
return(0);
}
