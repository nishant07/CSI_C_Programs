#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std
{
	int rno;
	char name[20];
	int m[3],tot;
};
void sortm (struct std []);
void sortn (struct std []);
void print (struct std []);
struct std a[3],d;



void main()
{
	int i,j,g=0,s,r,t,n,ch;
	char ans='y';
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter rollno:");
		scanf("%d",&a[i].rno);
		printf("Enter name:");
		scanf("%s",a[i].name);
		for(j=0;j<3;j++)
		{
			printf("Enter marks of stud.%d and sub.%d",i+1,j+1);
			scanf("%d",&a[i].m[j]);
			a[i].tot=a[i].tot+a[i].m[j];

	}
	}
	for(i=0;i<3;i++)
	{
		if(g<a[i].tot)
		{
			g=a[i].tot;
			s=i;

		}
	}
	printf("Name of highest scorer is:%s",a[s].name);
	printf("his rollno. is %d",a[s].rno);
	printf("His total is:%d",a[s].tot);


	while (ans=='y' || ans == 'Y')
	{
	clrscr();
	printf("\n Press 1 for sort by name");
	printf("\n Press 2 for sort by total");
	printf("\nEnter yr choice");
	scanf("%d",&ch);


		switch (ch)
		{
		case 1: 	sortn(a);
				print(a);
				break;
		case 2:		sortm(a);
				print(a);
				break;
		default: printf("\n Invalid choice");
	}
	printf("Do u want to cont.. (y/n)");
       scanf("%c",&ans);
}



	getch();
}
void print (struct std a[3])
{
	int i;
	printf("\nno\tName\tTotal");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%d",a[i].rno,a[i].name,a[i].tot);
	}

}
void sortm (struct std a[3])
{
	int t,i,j;
		for(t=0;t<3;t++)
	{
		for(j=i+1;j<3;j++)
		{
		if(a[i].tot>a[j].tot)
		{
			d=a[i];
			a[i]=a[j];
			a[j]=d;
		}
		}
	}
}
void sortn (struct std a[3])
{
      int t,j;
      for(t=0;t<3;t++)
	{
		for(j=t+1;j<3;j++)
		{
		if(strcmp(a[t].name,a[j].name)>0)
		{
			d=a[t];
			a[t]=a[j];
			a[j]=d;
		}
		}
	}
}