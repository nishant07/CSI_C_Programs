//type list using recu..

#include<stdio.h>
#include<conio.h>
struct list
{
	int no;
	struct list *next;
}*head,*start;
int i;
typedef struct list node;
void rlist()
{
	node *list;

	printf("\nEnter no & press 0 for end:");
	scanf("%d",&i);
	if(i!=0)
	{
		list=(node *)malloc(sizeof(node));
		list->no=i;
		list->next=NULL;
		head->next=list;
		head=list;
		rlist();
	}
	printf("%d",list->no);
}
void main()
{
	clrscr();
	printf("\nEnter no. & press 0 for end:");
	scanf("%d",&i);
	if(i==0)
		exit();
	else
	{
		head=(node *)malloc(sizeof(node));
		head->no=i;
		head->next=NULL;
		start=head;
		rlist();
		head=start;
//		printf(" %d",head->no);
	}
	getch();
}
