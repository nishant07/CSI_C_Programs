//total of some students using arrays
#include<stdio.h>
#include<conio.h>
void main()
{

	int a[5][3],i,j,total=0;
	float per;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nstu=%d & mark=%d",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}


	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			total=total+a[i][j];
			per=total/3.00;

		}
		printf("\n total=%d& per=%f",total,per);
		total=0;
	}

	getch();



}