#include<stdio.h>
#include<conio.h>
struct lest
{
	int no;
	struct  lest *next,*pre;
}*head,*start;
typedef struct lest node;
void rev(node *head)
{
	printf("\n\nreverse list \n");
	head=start;
	while((head->next)!=NULL)
	{
		head=head->next;
	}
	while(head!=NULL)
	{
		printf("%d->",head->no);
		head=head->pre;
	}
}
void main()
{
	int i;
	node *list;
	clrscr();
	printf("enter no & press 0 at the end\n");
	scanf("%d",&i);
	if(i==0)
		exit();
	else
	{
		head=(node *)malloc(sizeof(node));
		head->next=NULL;
		head->pre=NULL;
		head->no=i;
		start=head;
		do
		{
			printf("enter no & press 0 at the end:");
			scanf("%d",&i);
			if(i==0)
				break;
			else
			{
				list=(node *)malloc(sizeof(node));
				list->next=NULL;
				head->next=list;
				list->pre=head;
				list->no=i;
				head=list;
			}
		}while(i!=0);
		head=start;
		printf("original list\n");
		while(head!=NULL)
		{
			printf("%d->",head->no);
			head=head->next;
		}

	}
	rev(head);
	getch();
}




