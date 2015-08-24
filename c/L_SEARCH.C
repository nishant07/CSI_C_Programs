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
	int i,p,j,c=0,f=0;
	node *head,*list,*start;
	clrscr();
	printf("Enter no. Press 0 at end:");
	scanf("%d",&i);
	if(i==0)
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
			printf("Enter no. Press 0 at end:");
			scanf("%d",&i);
			if(i==0)
				break;
			else
			{
				list=(node *)malloc(sizeof(node));
				list->no=i;
				list->next=NULL;
				head->next=list;
				head=list;
			}
		}while(i!=0);
	}
	head=start;
	while(head!=NULL)
	{
		printf("%d",head->no);
		head=head->next;
	}
	printf("Enter no.:");
	scanf("%d",&p);
	head=start;
	while(head->next!=NULL)
	{       if(head->no==p)
		{
			printf("%dth position.\n",c+1);
			f++;
		}
		head=head->next;
		c++;

	}
	if(f==0)
		printf("\nNot found.");

	head->next=head->next->next;
	head=start;
	while(head!=NULL)
	{
		printf("\n%d",head->no);
		head=head->next;
	}
	getch();
}


