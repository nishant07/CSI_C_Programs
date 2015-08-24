#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,slen=0,tlen=0,f,k,p;
	char st[30],ch[10],temp[10],ex[40],n,r[25];
	clrscr();
	printf("Enter the string.");
	gets(st);
	printf("Enter the word you want to search");
	scanf("%s",ch);
	printf("\n enter ur word");
	scanf("%s",r);

	for(i=0;i<strlen(st);i++)
	{
		j=0;
		p=i;
		while(st[i]!=' ' && st[i]!='\0')
		{
			temp[j++]=st[i++];
		}
		temp[j]='\0';
		slen=strlen(ch);
		tlen=strlen(temp);
		if(slen==tlen)
		{     f=1;
			for(k=0;k<tlen;k++)
			{
				if(temp[k]!=ch[k])
				f=0;
			}
			if(f==1)
			{
				strcat(ex,r);
				strcat(ex," ");
			}

		}
		else
		{
			if(p==0)
			{
				strcpy(ex,temp);
				strcat(ex," ");
			}
			else
			{	strcat(ex,temp);
				strcat(ex," ");
			}
		}
	}

			if(f==0)
			printf("\n not found");
			else
			printf("%s",ex);



	getch();
}



