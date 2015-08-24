#include<stdio.h>
#include<conio.h>
#include<string.h>
void pali(char *a,int l)
{
	int i,f=0,t;
	t=l;
	for (i=0;*(a+i)!='\0';i++,l--)
	{
	      if( *(a+i)==*(a+l-1))
		f++;
	}
	if(f==t)
		printf("\n it is pallindorme");
	else
		printf("\n not pallindrome");
}
void main()
{
	char a[20];
	int l;
	clrscr();
	printf("\n enter ur string");
	scanf("%s",a);
	l=strlen(a);
	pali(a,l);
	getch();
}



