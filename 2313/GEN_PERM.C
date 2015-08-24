//find how many no. can be make by digits of give no. without repeatation.
#include<stdio.h>
#include<conio.h>
void swap(int *n1,int *n2)
{
	int t;
	t=*n1;
	*n1=*n2;
	*n2=t;
}
void main()
{
	int  n[5],z,l,i,j,k,f=1,r,f1=1,f2=1,f3=1;
	clrscr();
	printf("Enter limit.");
	scanf("%d",&l);
	printf("Enter r.");
	scanf("%d",&r);
	for(i=1;i<=l;i++)
		f1*=i;
	for(i=1;i<=(l-r);i++)
		f2*=i;
	f=f1/(f2*f3);
//	printf("\n%d",f);
	for(i=0;i<l;i++)
		scanf("%d",&n[i]);
	for(i=0,z=0;i<f;i++,z++)
	{
			if(z+1>=l)
			{
				swap(&n[z],&n[0]);
				for(j=0;j<r;j++)
					printf("%d ",n[j]);
				printf("\n");
					z=0;
					continue;
			}
			swap(&n[z],&n[z+1]);
			for(j=0;j<r;j++)
				printf("%d ",n[j]);
			printf("\n");

	}
	getch();
}



