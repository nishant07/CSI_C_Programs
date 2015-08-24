//type list using recu..

#include<stdio.h>
#include<conio.h>
struct list
{
	int no;
	struct list *next;
}*head,*start;
int i=1;
typedef struct list node;
void rlist(node *head)
{
	node *list;
	if(i==0)
		head->next=NULL;
	else
	{
		printf("\nEnter no & press 0 for end:");
		scanf("%d",&i);
		if(i!=0)
		{
			head=(node *)malloc(sizeof(node));
			head->no=i;
			head->next=NULL;
//			head=head->next;
			rlist(head->next);
			printf("%d ",head->no);
		}
	}
}
void main()
{
	clrscr();
	start=head;
	rlist(head);
	getch();
}
