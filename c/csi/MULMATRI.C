// multiplicate 2 matrixes in a new matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,b1,b2,m1[10][10],m2[10][10],m3[10][10];
	int i,j,k;
	clrscr();
	printf("Enter number of rows for first matrix:");
	scanf("%d",&a1);
	printf("Enter number of columns for first matrix:");
	scanf("%d",&a2);
	printf("Enter number of rows for second matrix:");
	scanf("%d",&b1);
	printf("Enter number of columns for second matrix:");
	scanf("%d",&b2);
	if(a2!=b1)
	{
		printf("This cannot be done!...");
	}
	else
	{
		for(i=0;i<a1;i++)
		{
			for(j=0;j<a2;j++)
			{
			printf("m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
			}
		}
		for(i=0;i<b1;i++)
		{
			for(j=0;j<b2;j++)
			{
			printf("m2[%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
			}
		}

		for (i=0;i<a1;i++)
		{
			for(j=0;j<b2;j++)
			{
				m3[i][j]=0;
				for (k=0;k<b1;k++)
				{
					m3[i][j]= m3[i][j] + (m1[i][k] * m2[k][j]);
				}
			}
		}
		printf("\n Multiplication\n");
for (i=0;i<a1;i++)
{
	for (j=0;j<b2;j++)
	{
		printf("%d\t",m3[i][j]);
	}
	printf("\n");
}
}
getch();
}




