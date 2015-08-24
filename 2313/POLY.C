#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,b[25],a[25],l,l1,x,j,tot1=0,tot2=0,y;
	clrscr();
	printf("\Enter degree1:");
	scanf("%d",&l);
	for(i=l;i>=0;i--)
	{
		printf("\nco-officient of variable having power %d for a:",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value of x:");
	scanf("%d",&x);
	if(x!=0)
       {
		for(i=0;i<=l;i++)
			tot1+=(a[i]*pow(x,i));
	}
	else if(x==0)
		tot1=a[0];
	printf("\nEnter degree2:");
	scanf("%d",&l1);
	for(i=l1;i>=0;i--)
	{
		printf("\nco-officient of variable having power %d for b:",i);
		scanf("%d",&b[i]);
	}
	printf("\nEnter the value of y:");
	scanf("%d",&y);
	if(y!=0)
	{
		for(i=0;i<=l1;i++)
			tot2+=(b[i]*pow(y,i));
	}
	if(y==0)
		tot2=b[0];
	printf("\nTotal of a and b is %d.",tot1+tot2);
	getch();
}