//count maximumu nos frequency without comparing its allements
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,l,a[25],max=-32768,n=0;
	clrscr();
	printf("Enter how many no. u want to enter:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			n=0;
			max=a[i];
		}
		if(a[i]==max)
			n++;
	}
	printf("\n%d\t%d",max,n);
	getch();
}