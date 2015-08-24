//it will find second largestno
#include<conio.h>
#include<stdio.h>
void seclar(int *n,int no)
{
	int i,j,t;
	for(i=0;i<no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(*(n+i)<*(n+j))
			{
				t=*(n+i);
				*(n+i)=*(n+j);
				*(n+j)=t;
			}
		}
	}
	printf("\n the second largest no = %d",*(n+1));

}
void main()
{
	int n[100],i,no;
	clrscr();
	printf("How many no. u want to insert:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("\nEnter no.%d:",i+1);
		scanf("%d",&n[i]);
	}
	seclar(n,no);
	getch();
}


