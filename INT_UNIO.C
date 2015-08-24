#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],c[5],d[10],i,j,k=0,f;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter no.%d",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nS a");
	for(j=0;j<5;j++)
	{
		printf("\nEnter no.%d",j+1);
		scanf("%d",&b[j]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("\n %d ",c[i]);
	}
	//union
	for (i=0;i<5;i++)
	d[i]=a[i];

	for (k=0;k<5;k++) //b
	{
		f=0;
		for (j=0;j<5;j++)  //a
		{
			if (a[j]==b[k])
			f=1;
		}
		if (f==0)
		{
			d[i]=b[k];
			i++;
		}

	}
	printf("\nUnion\n");
	for (j=0;j<i;j++)
	printf("\n%d",d[j]);


	getch();
}







