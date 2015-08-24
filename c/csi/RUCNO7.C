//studetnt's info search by joning year
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std
{
	int no,year;
	char name[20],dept[20],cour[20];
};
struct std a[3];
void year(struct std []);
void roll(struct std []);
void main()
{
	int i,j,ch;
	clrscr();
	printf("\nName\tRoll no\tDepartment\tyear\tcourse\n");

	for(i=0;i<3;i++)
	{

		scanf("%s%d%s%d%s",a[i].name,&a[i].no,&a[i].dept,&a[i].year,a[i].cour);
	}
	printf("\nEnter 1 for printing datas of students joined in aparticular yaer:");
	printf("\nEnter 2 for printing datas of students you want to see:");
	printf("Enter your choice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		year(a);
	}
	else if(ch==2)
	{
		roll(a);
	}
	else
	{
		printf("Invalid choice.");
	}
	getch();
}
void year(struct std a[3])
{
	int ye,j=0,i;
	printf("Enter the year ");
	scanf("%d",&ye);

	for(i=0;i<3;i++)
	{
		if(a[i].year==ye)
		{       if(j==0)
			printf("\n Name\tRoll no\tDept\tcourse\tYear");
			else
			{
			printf("\n%s\t%d\t%s\t%s\t%d",a[i].name,a[i].no,a[i].dept,a[i].cour,a[i].year);
			j=j+1;		}
			}
	}
	if(j==0)
	{
		printf("No record found.");
}
}

void roll(struct std a[3])
{
	int i;
	printf("Enter the rollnumber:");
	scanf("%d",&i);
	printf("\n Name\tRoll no\tDept\tcourse\tYear");
	printf("\n %s\t%d\t%s\t%s\t%d",a[i-1].name,a[i-1].no,a[i-1].dept,a[i-1].cour,a[i-1].year);
}




