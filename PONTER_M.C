#include<stdio.h>
#include<conio.h>
void fun(int *a,int n)
{
	int max=-32768,min=32767,i,j,sum=0;
	for(i=0;i<n;i++)
	{
		if(max<*(a+i))
		max=*(a+i);
		if(min> *(a+i))
			min=*(a+i);
		sum=sum+ *(a+i);

	}
	printf("\nmax=%d, \n min=%d \n avg=%d",max,min,sum/n);
}
void main()
{
	int n,a[100],i;
	clrscr();
	printf("How many numbers do you want?");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,n);
	getch();
}