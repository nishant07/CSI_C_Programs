//find how many no. can be make by digits of give no. without repeatation.
#include<stdio.h>
#include<conio.h>
void swap(int *n1,int *n2)
{
	int t;
	t=*n1;
	*n1=*n2;
	*n2=t;
}
void main()
{
	int  n[5],l,i,j,k;
	clrscr();
	for(i=0;i<3;i++)
		scanf("%d",&n[i]);
	for(i=0;i<=5;i++)
	{
		if(i%2==0)
		{
			printf("%d %d %d\n",n[0],n[1],n[2]);
			swap(&n[1],&n[2]);
		}
		else
		{
			swap(&n[0],&n[1]);
			printf("%d %d %d\n",n[0],n[1],n[2]);
		}
	}
	getch();
}



