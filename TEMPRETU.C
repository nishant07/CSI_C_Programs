//print tempreture of some cities of some days
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][2],i,j,max=-9000;
	clrscr();
	for (i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter tempreture of %dth day od %dth city\n",
						i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("day----city----temp\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d----%d----%d\n",i+1,j+1,a[i][j]);
			if(a[i][j]>max)
				max=a[i][j];
		}
	}
	printf("\n------------- %d-------------",max);
	getch();
}



