//printf name likethis(harshil k. shah)
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0;
	char a[20],b[20];
	clrscr();
	printf("Enter your name");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			b[j]=' ';
			j++;
			i++;
			b[j]=a[i];
			j++;
			b[j]='.';
			j++;
			b[j]=' ';
			i=i+2;
			j++;
			while(a[i]!=' ')
			i++;
		}
	}
	b[j]='\0';
	printf("\n %s",b);
	getch();
}






