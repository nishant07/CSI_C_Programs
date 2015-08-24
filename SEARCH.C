//how to search a word from a string
#include<stdio.h>
#include<conio.h>
#include<string.h>#include<io.h>
void main()
{
	char a[100],s[20][20];
	int i,j,k;
	clrscr();
	printf("Enter string:");
	gets(a);
	i=0;
	j=0;
//searching words.
	for(k=0;a[k]!='\0';k++)
	{

		if(a[k]==' ' )
		{
			s[i][j]='\0';
			i++;
			j=0;
			while(a[k]==' ')
			k++;
			k--;
		}
		else
		{

			s[i][j]=a[k];
			j++;
		}
	}
	if(a[k]=='\0')
			s[i][j]='\0';
	for(j=0;j<=i;j++)
	{
	    if(s[j][0]=='\0')
	    continue;
	    printf("------>%s\n",s[j]);

	}
      printf("==============\n");

	getch();
}