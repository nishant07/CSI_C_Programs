#include<stdio.h>
#include<conio.h>
struct list
{
	int no;
	struct list *next;
}*head;
typedef struct list node;
void print (node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->no);
		p=p->next;
	}
}
void del (node *p)
{
	int no,f=0;
	printf("Enter no");
	scanf("%d",&no);
	if (p->no==no)
	{
		p=p->next;
		head=p;
		f=1;
	}
	while (p!=NULL)
	{
		if (p->next->no==no)
		{
			p->next=p->next->next;
			f=1;
		}
		if (p->next->next==NULL&&p->no==no)
		{
			p->next=NULL;
			f=1;
		}
		p=p->next;
	}
	if (f==0)
	printf("\n Not found");

}
void main()
{
	int i,p,j,f=0,c=0;
	node *list,*start;
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
			printf("Enter no. Press -1 at end");
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
	print(head);
	del (head);
	print(head);
	getch();
}


