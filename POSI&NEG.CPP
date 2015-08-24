#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[100],i,ch,t;
	printf("how many numbers u want to enter");
	scanf("%d",&ch);
	for(i=0;i<ch;i++)
	{
		printf("enter ur numbers");
		scanf("%d",a[i]);
	}
	for(i=0;i<ch;i++)
	{
		if(a[i]<0)
		{
			for(j=i;j<ch;j++)
			{
				a[j]=a[j+1];
				j++;
			}
			a[j]=t;
		}
	}





