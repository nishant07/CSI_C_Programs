#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stu
{
	int no,jy;
	char name[20],dept[20],co[20];
}s[3];

void nname(struct stu []);
void data(struct stu []);
void main()
{

	int i,j;
	char ch,c;
	clrscr();

	for(i=0;i<3;i++)
	{
		printf("\nrollno name Dep Corse Yj");
		scanf("%d%s%s%s%d",&s[i].no,s[i].name,s[i].dept,s[i].co,&s[i].jy);

	}
	while(1)
	{
	printf("\nEnter a to search by jy");
	printf("\nEnter b to search by roll no");
	fflush(stdin);
	scanf("%c",&ch);
		if(ch=='a')
		{
			nname(s);
		}
		else if(ch=='b')
		{
			data(s);
		}
		else
		printf("\n invalid");
		printf("\n do u want to cotinue...(y\n)");
		fflush(stdin);
		scanf("%c",&c);
		if(c!='y')
	{	break;
	}

	}

	getch();
}


void nname(struct stu s[3])
{

	int i,j,y,f=0;

		printf("\n Enter the year");
		scanf("%d",&y);
	for(i=0;i<3;i++)
	{

		if(s[i].jy==y)
		{
			printf("\n name\t");
			printf("\n %s",s[i].name);
			f=1;
		}

	}
	if (f==0)
	printf("\nYear not found\n");
}
void data(struct stu s[3])
{
	 int i,j,no,f=0;
	printf("\n Enter the roll no");
	fflush(stdin);
	scanf("%d",&no);
	for(i=0;i<3;i++)
	{
		if(s[i].no==no)
		{
			printf("Rollno\t Name\t Department\t Courses\t Join");
			printf("\n%d\t %s\t \t%s\t %s\t%d",s[i].no,s[i].name,s[i].dept,s[i].co,s[i].jy);
			f=1;
		}
	}
	 if (f==0)
	 printf("\nrollno is not found\n");

}
