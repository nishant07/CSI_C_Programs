#include<stdio.h>
#include<conio.h>
struct std
{
	int roll,marks[3];
	char name[20];
};
struct std a[3];
void st(struct std *a,int tot[])
{       int i,max=0,j;
	for(i=0;i<3;i++)
	{
			if(tot[i]>max)
				max=tot[i];
	}
	for(i=0;i<3;i++)
	{
		if(max==tot[i])
		break;
	}
	printf("Rollnumber\tName\ttotal\n");
	printf("%d        \t%s    %d",(a+i)->roll,(a+i)->name,tot[i]);
}
void main()
{
	int i,j,tot[3]={0,0,0} ;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter your %d student's roll-number:",i+1);
		scanf("%d",&a[i].roll);
		printf("Enter your %d name:",i+1);
		scanf("%s",a[i].name);
		for(j=0;j<3;j++)
		{
			printf("Enter mark %d of student %d:",j+1,i+1);
			scanf("%d",&a[i].marks[j]);
			tot[i]+=a[i].marks[j];
		}

	}
	st(a,tot);
	getch();
}


