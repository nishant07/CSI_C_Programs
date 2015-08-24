#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],l,i,j,c=1,b[50],ch=0,k,t,p;
	clrscr();
	printf("\nEnter limit:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("\nEnter no%d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Enter k:");
	scanf("%d",&k);
	for(i=0;i<l;i++)
	{
		j=i;
		c=1;
		t=k;
		while(a[j]==a[j+1])
		{
			c++;
			j++;
			t=a[j];
		}
		if(c==k)
		{
			j=0;
			p=0;
			for(p=0;p<l;p++)
			{
				if(t==a[p])
					continue;
				else
				{
				b[j]=a[p];
				j++;
				}
			}
		}

	}
	for(i=0;i<--j;i++)
		printf("\n %d",b[i]);
	getch();
}





