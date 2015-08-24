#include<stdio.h>
#include<conio.h>
#include<string.h>



struct stu
{
	int no,m[3],tot;
	char name[20];
}s[3],t;
void main()
{
	int i,rno,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		s[i].tot=0;
		printf("\n enter no,name");
		scanf("%d%s",&s[i].no,s[i].name);
		for(j=0;j<3;j++)
		{
			printf ("\n enter marks%d:",j+1);
			scanf("%d",&s[i].m[j]);
			s[i].tot=s[i].tot+s[i].m[j];
		}
		printf("Total=%d\n\n",s[i].tot);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmpi(s[i].name,s[j].name)>0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=s[i];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n the names are\n %s",s[i].name);
	}

	getch();
}




