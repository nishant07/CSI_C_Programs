#include<stdio.h>
#include<conio.h>
struct f1
{
	int no;
	struct f1 *next;
};
typedef struct f1 sf;
void main()
{
	int i,c=0;
	sf *head,*list,*start;
	clrscr();
	printf("\n enter ur nos & press 0 for end");
	scanf("%d",&i);
	if (i==0)
	{
		printf("\n u have entered end at the beginning:");

	}
	else
	{
		head=(sf *)malloc(sizeof(sf));
		head->no=i;
		head->next=NULL;
		start=head;
		c++;
		do
		{
			printf("\n enter no& press 0 for exit");
			scanf("%d",&i);
			if(i==0)
				break;
			else
			{
				list=(sf *)malloc(sizeof(sf));
				list->no=i;
				list->next=NULL;
				head->next=list;
				list=head;
				c++;
			}
		}while(i!=0);
	}
	head=start;
	while(head!=NULL)
	{
		printf("%d->",head->no);
		head=head->next;
	}
	printf("\n the total nodes are:%d",c);
	getch();
}













