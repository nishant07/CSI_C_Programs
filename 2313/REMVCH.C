//program to rmove char
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[2][80],t,d[80];
	int i,j,k,l;
	clrscr();
	printf("\nEnter two string:");
	gets(s[0]);
	gets(s[1]);
	k=0;
	for(i=0;s[0][i]!='\0';i++)
	{
		for(j=0;s[1][j]!='\0';j++)
		{

			if(s[0][i]==s[1][j])
			{
			     d[k]=s[0][i];
			     k++;

			}
		}
	}

	d[k]='\0';
	for (j=0;d[j]!='\0';j++)
	{

		for (i=0;s[0][i]!='\0';i++)
		{
			k=i;
			if (s[0][i]==d[j])
			{
				while (s[0][k]!='\0')
				{
					s[0][k]=s[0][k+1];
					k++;
				}
				s[0][k]='\0';
			}
		}

	}
	for (j=0;d[j]!='\0';j++)
	{

		for (i=0;s[1][i]!='\0';i++)
		{
			k=i;
			if (s[1][i]==d[j])
			{
			while (s[1][k]!='\0')
			{
				s[1][k]=s[1][k+1];
				k++;
			}
			s[1][k]='\0';
			}
			}
	}
	puts(s[0]);
	puts(s[1]);

	getch();
}
