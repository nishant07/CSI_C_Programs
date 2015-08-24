#include<stdio.h>
#include<conio.h>
void conv(char *a)
{
	int i;
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i)>=97 && *(a+i)<=122)
		*(a+i)=*(a+i)-32;
	}
	printf("%s",a);
}
void main()
{
	char a[100];
	clrscr();
	printf("\n Enter the string:");
	scanf("%s",a);
	conv(a);
	getch();
}

