#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,space;
	char n1[20],n2[20];
	clrscr();
	printf("Enter string.");
	gets(n1);
	for(i=0,j=0;n1[i]!='\0';i++)
	{
		if(n1[i]!=' ' || n1[i]==' ' && n1[i+1]!= ' ')
		{
				n2[j]=n1[i];
				j++;
			}

	}
       n2[j]='\0';

	printf("%s",n2);
	getch();
}