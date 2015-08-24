#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,sp=40,n,a;
	clrscr();
	printf("Enter limit");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (k=0;k<sp;k++)
		printf(" ");
		for (j=n;j>=i;j--)
		printf("%d ",j);
		for (a=j+2;a<=n;a++)
		printf("%d ",a);
		sp=sp-2;
		printf("\n");
	}
	sp=sp+4;
	for (i=2;i<=n;i++)
	{
		for (k=0;k<sp;k++)
		printf(" ");
		for(j=n;j>=i;j--)
		printf("%d ",j);
		for (a=j+2;a<=n;a++)
		printf("%d ", a);
		sp=sp+2;
		printf("\n");
	}
	getch();
}


