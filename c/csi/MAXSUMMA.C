#include<stdio.h>
#include<conio.h>
void main()
{
	int b1,b2,m2[10][10],max,sum,n,t;
	int i,j,k;
	clrscr();
	printf("Enter number of rows for second matrix:");
	scanf("%d",&b1);
	printf("Enter number of columns for second matrix:");
	scanf("%d",&b2);

		for(i=0;i<b1;i++)
		{
			for(j=0;j<b2;j++)
			{
			printf("m2[%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
			}
		}
		for(i=0;i<b1;i++)
		{       sum=0;
			for(j=0;j<b2;j++)
			{
				sum=sum+m2[i][j];
			}

			if(sum>max)
		    {
			max=sum;
			t=i+1;

		}
	}
	       printf("%d",t);

	getch();
}






