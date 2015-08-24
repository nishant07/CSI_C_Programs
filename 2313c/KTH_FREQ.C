//delete no repeated for k th time
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j=0,a[20],l,ch=1,t[20]={0},z=0,b[50],k;
	printf("\n enterv ur limit");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("\n%dth no:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n enter nos u wnat to delete");
	scanf("%d",&k);
	for(i=0;i<l;i++)//remove no which are repeated
	{
		if(a[i]!=a[i+1])
		{
				b[j]=a[i];
				j++;
		}
	}
	for(i=0;i<j;i++)//count ferqency of nos
	{
		for(z=0;z<l;z++)
		{
			if(b[i]==a[z])
				t[i]++;
		}
	}
	for(i=0;i<j;i++)//remove no on base of k
	{
		if(t[i]!=k)
		{
			for(z=0;z<t[i];z++)
			{
				printf("%d\n",b[i]);
			}
		}
	}
	getch();
}






