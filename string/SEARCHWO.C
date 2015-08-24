//sepreat words and count its position
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[150],b[50][20],wo[50];
	int i,j=0,k=0;
	clrscr();
	printf("enter ur string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			b[j][k]='\0';
			j++;
			k=0;
			while(a[i]==' ')
				i++;
		}

		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
	}
	b[j][k]='\0';
	printf("\n enter the word which u want to search\n");
	scanf("%s",wo);
	for(i=0;i<=j;i++)
	{
	       if(strcmpi(wo,b[i])==0)
			printf("ur word is--- %d-----th word",i+1);
	}

	for(i=0;i<=j;i++)
	{
		printf("\n\\\\\\\%s\\\\\\\n",b[i]);
	}

	getch();
}






