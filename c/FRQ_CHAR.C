#include<stdio.h>
void main()
{
	char s[20];
	int t[26] = {0},i;
	clrscr();
	printf("Enter string:");
	scanf("%s",s);
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]>='a'&&s[i]<='z')
			t[s[i]-97]++;
		if (s[i]>='A'&&s[i]<='Z')
			t[s[i]-65]++;
	}
	for (i=0;i<26;i++)
	{
		if (t[i]>0)
			printf("\n%c --- %d",97+i,t[i]);
	}
	getch();
}

