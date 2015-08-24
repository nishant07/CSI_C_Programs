#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],c[40],i,t,j,k,ch;


	for(i=0;i<5;i++)
	{
		printf("\n enter ur A %dth no",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n enter ur B %dth no",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	ch=0;
	for(i=0;i<5;i++)
	{	ch++;
		c[i]=a[i];
	}
	for(k=i,j=0;k<j+i;k++,j++)
	{	ch++;
		c[k]=b[j];
	}
	for(i=0;i<ch;i++)
	{
		for(j=i+1;j<ch;j++)
		{
			if(c[i]<c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
			if(c[j]<c[i])
			{
				t=c[j];
				c[j]=c[i];
				c[i]=t;
			}
			if(c[i]==c[j])
			{
				c[i]=c[i+1];
			}

		}
	}


/*	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{

			if(a[i]<a[j])
			{
				c[k]=a[i];
				i++;
				k++;
			}
			if(a[i]>a[j])
			{
				c[k]=a[j];
				j++;
				k++;
			}
			if(a[i]==a[j])
			{
				c[k]=a[i];
				i++;j++;k++;
			}
		}
	}*/
	for(i=0;i<ch;i++)
	{
		printf("%d",c[i]);
	}
	getch();
}









