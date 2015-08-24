//enter data of some students in a assending order & enter what u wnat to find

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
{       int i,j,ch;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\nName\tRoll no\tDepartment\tyear\tcourse\n");
		scanf("%s \t%d\t %s\t %d\t %s",a[i].name,&a[i].no,&a[i].dept,&a[i].year,a[i].cour);
	}
	printf("Enter 1 for printing datas of students joined in aparticular yaer:");
	printf("Enter 2 for printing datas of students you want to see:");
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
	int ye,j,i;
	printf("Enter the year ");
	scanf("%d",&ye);
	printf("\n Name\tRoll no\tDept\tcourse\tYear");
	for(i=0;i<3;i++)
	{
		if(a[i].year==ye);
		{
			printf("\n %s\t%d\t%s\t%s\t%d",a[i].name,&a[i].no,a[i].dept,a[i].cour,&a[i].year);
		}
	}
}
void roll(struct std a[3])
{
	int i;
	printf("Enter the rollnumber:");
	scanf("%d",&i);
	printf("\n Name\tRoll no\tDept\tcourse\tYear");
	printf("\n %s\t%d\t%s\t%s\t%d",a[i].name,&a[i].no,a[i].dept,a[i].cour,&a[i].year);
}




