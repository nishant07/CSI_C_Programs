#include<stdio.h>
#include<conio.h>
#include<math.h>
int myatoi(char no[])
{
	int i,z=0,l,a;
	for(i=0;no[i]!='.' && no[i]!='\0';i++);
	a=i;
	for(l=0;l<i;l++)
		z+=(no[l]-48)*pow(10,a--);
	return(z);
}
void main()
{
	int n;
	char no[10];
	clrscr();
	printf("Enter any no.:");
	scanf("%s",no);
	n=myatoi(no);
	printf("\n%d",n);
	getch();
}