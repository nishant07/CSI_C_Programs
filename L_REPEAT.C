//It will print numbers without repeatation.
#include<stdio.h>
#include<conio.h>
struct list
{
	int no;
	struct list *next;
}*start,*head;
typedef struct list node;
void repeat()
{
	node *p;
	p=head;
	while(p!=NULL)
	{
		if(p->next->no==p->no)
		{
			while(p->no==p->next->no)
				p->next=p->next->next;
		}
		else
		p=p->next;

	}
	p=start;
	printf("Without repeatation.\n");
	while(p!=NULL)
	{
		printf("%d\n",p->no);
		p=p->next;
	}
}
void main()
{
	node *list;
	int i;
	clrscr();
	printf("Enter no and press -1 at end:");
	scanf("%d",&i);
	if(i==-1)
	exit();
	else
	{
		head=(node *)malloc(sizeof(node));
		head->next=NULL;
		head->no=i;
		start=head;
		do
		{
			printf("Enter no and press -1 at end:\n");
			scanf("%d",&i);
			if(i==-1)
				break;
			else
			{
			list=(node *)malloc(sizeof(node));
			head->next=list;
			list->no=i;
			head=list;
			list->next=NULL;
			}
		}while(1);
		head=start;
		printf("With repeatation.\n");
		while(head!=NULL)
		{
			printf("%d \n",head->no);
			head=head->next;
		}
	}
	head=start;
	repeat();
	getch();
}