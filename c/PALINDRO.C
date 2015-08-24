#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,f=1;
	char a[20],b[20];
	clrscr();
	printf("Enter any string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	i--;
	for (j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	b[j]='\0';

	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]!=b[i])
		{	f=0;
			break;
		}
	}
	if (f==1)
	printf("Palindrome");
	else
	printf("Not Palindrome");

	getch();
}


