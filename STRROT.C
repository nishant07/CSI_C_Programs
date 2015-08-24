#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],t;
	int i,l,j;
	scanf("%s",s);
	l=strlen(s);
	for (i=0;i<l;i++)
	{
	     t=s[0];
	     for (j=1;s[j]!='\0';j++)
	     {
		s[j-1]=s[j];
	     }
	     s[j-1]=t;
	     printf("\n%s",s);
	}
getch();
}



