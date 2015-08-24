
#include<stdio.h>
#include<conio.h>
void edit(int a[]);
void del(int a[]);
void ins(int a[]);
void disp (int a[]);

int limit;
void main()
{
	int i,a[100],c,ch;
	char ans;
	clrscr();
	printf("\n how many no u mant to enter");
	scanf("%d",&limit);
	printf("\n enter ur no in ascending order:\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	while (1)
	{
	printf("\n press1 for edit");
	printf("\n press2 for delete");
	printf("\n press3 for insert");
	printf("\n press 4 for display");
	scanf("%d",&ch);
	if(ch==1)
		edit(a);
	else if(ch==2)
		del(a);
	else if (ch==3)
		ins(a);
	else if (ch==4)
		disp(a);
	else
		printf("\nInvalid choice");

	printf("Do u want to continue");
	fflush(stdin);
	scanf("%c",&ans);
	if (ans!='y' && ans!='Y')
	break;
}
getch();
}
void disp (int a[])
{
	int i;
	printf("\nElements are ......\n");
	for (i=0;i<limit;i++)
	{
		printf("%d\t",a[i]);
	}
}
void ins (int a[])
{
	int no,i,f=0,j;
	printf("\n Which no u want to insert") ;
	scanf("%d",&no);
	for (i=0;i<limit;i++)
	{
		if (a[i]>no)
		{
			for (j=limit;j>i;j--)
			{
				a[j]=a[j-1];
			}
			a[i]=no;
			f=1;
		break;
		}
	}
	if (f==0)
	a[limit]=no;
	limit ++;
}
void edit (int a[])
{
	int no,j,i,f=0,no1;
	printf("\n Enter which no u want to edit");
	scanf("%d",&no);
	printf("\n Enter new no");
	scanf("%d",&no1);
	for (i=0;i<limit;i++)
	{
		if (a[i]==no)
		{
			a[i]=no1;
			f=1;
		}
	}

	if (f==0)
	printf("\n No not found");
}
void del (int a[])
{
	int no,f=0,i,j;
	printf("Enter which no u want to delete:");
	scanf("%d",&no);
	for (i=0;i<limit;i++)
	{
		if (a[i]==no)
		{
			for (j=i;j<limit;j++)
			{
				a[j]=a[j+1];
			}
		 f=1;
		}
	}

	if (f==0)
	{
		printf("\n no not found");
	}
	else
	limit --;
}



