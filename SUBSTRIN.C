//find position of substring from a string (this is class)&(is)&(position=6)
#include<stdio.h>

#include<conio.h>
#include<string.h>
void main()
{
	int i,j,slen=0,tlen=0,f,k;
	char st[30],ch[10],temp[10],n;
	clrscr();
	printf("Enter the string.");
	gets(st);
	printf("Enter the word you want to search");
	scanf("%s",ch);
	for(j=0;ch[j]!='\0';j++);
	for(i=0;st[i]!='\0';i++)
	{
		j=0;
		tlen=0;
		f=2;
		while(st[i]!=' ' && st[i]!='\0')
		{
			temp[j++]=st[i++];
		}
		temp[j]='\0';
		slen=strlen(ch);
		tlen=strlen(temp);
		if(slen==tlen)
		{
			for(k=0;k<tlen;k++)
			{
				if(temp[k]==ch[k])
				{
					f=0;
				}
				else
				{
					f=1;
				}
			}
			if(f==0)
				printf("%d position",i-1);
		}
	}
	getch();
}



