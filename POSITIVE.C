#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[100],i,ch,t,j,r;
	clrscr();
	printf("how many numbers u want to enter");
	scanf("%d",&ch);
	r=ch;
	for(i=0;i<ch;i++)
	{

		printf("enter ur numbers");
		scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{
		if(a[i]<0)
		{
			t=a[i];
			for(j=i;j<ch-1;j++)
			{

				a[j]=a[j+1];
			}
			a[j]=t;
			r--;
		}

	}
	for(i=0;i<ch;i++)
		printf("%d",a[i]);
	getch();
}





