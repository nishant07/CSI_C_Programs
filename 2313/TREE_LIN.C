#include<stdio.h>
#include<string.h>
#include<conio.h>
struct list
{
	struct list *lptr;
	char data;
	struct list *rptr;
}*t=NULL;
typedef struct list node;
node *create_tree(node *);
node *create (node *);
void display(node *);

void main()
{
	t=create_tree(t);
	printf("\n");
	display(t);
}
node *create_tree(node *ptr)
{
	char x;
	char ch;
	ptr=(node *)malloc(sizeof(node));
	printf("\n Enter root node");
	scanf("%c",&x);
	ptr->data=x;
       fflush(stdin);
	printf("is lptr of main root %c null[Y/N]",ptr->data);
	ch=getchar();
	if(ch=='y'||ch=='Y')
		ptr->lptr=NULL;
	else
		ptr->lptr=create(ptr->lptr);
	fflush(stdin);
	printf("is rptr of main root %c null[Y/N]",ptr->data);
	ch=getchar();
	if(ch=='y'||ch=='Y')
		ptr->rptr=NULL;
	else
		ptr->rptr=create(ptr->rptr);
	return(ptr);
}
node *create(node *temp)
{
	char ch,x;
	temp=(node *)malloc(sizeof(node));
	fflush(stdin);
	printf("\n Enter data");
	x=getchar();
	temp->data=x;
	printf("is lptr of %c null [Y/N]",temp->data);
	fflush(stdin);
	ch=getchar();
	if(ch=='y'||ch=='Y')
		temp->lptr=NULL;
	else
		temp->lptr=create(temp->lptr);
	printf("is rptr of main root %c null[Y/N]",temp->data);
	fflush(stdin);
	ch=getchar();
	if(ch=='y'||ch=='Y')
		temp->rptr=NULL;
	else
		temp->rptr=create(temp->rptr);
	return(temp);
}
void display(node *t)
{
	if(t!=NULL)
	{
		display(t->lptr);
		printf("%c--->>>",t->data);
		display(t->rptr);
	}
}













