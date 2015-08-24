#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,space=0,t;
	char a[100],c;
	printf("\n entrer sany string");
	do
	{
		c=getchar();
		a[i]=c;
		i++;
	}while(c!='*');
	t=i;
	a[i]='\0';
	for(i=0;i<=t;i++)
	{
		if(a[i]==' ')
		space++;

	}
	printf("\n the spaces are%d",space);
	getch();
}
