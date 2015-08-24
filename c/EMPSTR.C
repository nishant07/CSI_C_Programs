#include<stdio.h>
#include<conio.h>



struct stu
{
	int no,m[3],tot;
	char name[20];
}s[3];
void main()
{
	int i,max=0,rno,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n enter no,name");
		scanf("%d%s",&s[i].no,s[i].name);
		s[i].tot=0;
		for(j=0;j<3;j++)
		{
			printf ("\n enter marks%d:",j+1);
			scanf("%d",&s[i].m[j]);
			s[i].tot=s[i].tot+s[i].m[j];
		}
	}
	max=s[0].tot;
	for(i=1;i<3;i++)
	{
		if(max<s[i].tot)
		{
			max=s[i].tot;
			rno=i;
		}

	}
	printf("\nthe highest total=%d & rno=%d",max,rno);
	getch();
}


