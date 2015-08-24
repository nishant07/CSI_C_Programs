#include<stdio.h>
#include<conio.h>
struct list
{
	int no;
	struct list *next;
};
typedef struct list node;

void main()
{
	int i,p,j,c=0;
	node *head,*list,*start,*n1;
	clrscr();
	printf("Enter no. Press -1 at end");
	scanf("%d",&i);
	if(i==-1)
	{
		printf("List will not be created");
	}
	else
	{
		head=(node *)malloc(sizeof(node));
		head->no=i;
		head->next=NULL;
		start=head;
		do
		{
			printf("Enter no. Press -1 at end:");
			scanf("%d",&i);
			if(i==-1)
				break;
			else
			{
				list=(node *)malloc(sizeof(node));
				list->no=i;
				list->next=NULL;
				head->next=list;
				head=list;
			}
		}while(i!=-1);
	}
	head=start;
	while(head!=NULL)
	{
		printf("%d",head->no);
		head=head->next;
		c++;
	}
	printf("\nNodes=%d\n",c);
	n1=(node *)malloc(sizeof(node));
	n1->no=0;
	n1->next=NULL;
	printf("Enter number and position:");
	scanf("%d %d",&(n1->no),&p);
	head=start;
	if(p==c+1)
	{
		while(head->next!=NULL)
			head=head->next;
		head->next=n1;
		n1->next=NULL;
		head=start;
	}
	else if(p==1)
	{
		n1->next=head;
		head=n1;

	}
	else
	{
		for(j=1;j<=p-1;j++)
		{
			head=head->next;
		}
		n1->next=head->next;
		head->next=n1;


		head=start;
	}
	while(head!=NULL)
	{
		printf("\n%d",head->no);
		head=head->next;
	}

	getch();

}


