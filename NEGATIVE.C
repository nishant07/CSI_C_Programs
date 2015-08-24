#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,ch,r,t,j;
	clrscr();
	printf("How many numbers do you want?");
	scanf("%d",&ch);
	r=ch;
	for(i=0;i<ch;i++)
	{
		printf("Enter no %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{
		if(a[i]<0)

		{
			t=a[i];
			for(j=i;j<ch-1;j++)
				 a[j]=a[j+1];
			a[j]=t;
			r--;
			i--;
		}
	}
	for(i=0;i<ch;i++)
		printf("%d \n",a[i]);
	getch();
}

