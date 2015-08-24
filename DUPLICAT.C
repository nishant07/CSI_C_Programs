//enter those nubers which are not repeated by the user
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ch,a[100],k;
	clrscr();
	printf("\n how many no u want to enter");
	scanf("%d",&ch);
	printf("\n enter ur nos");
	for(i=0;i<ch;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<ch;i++)
	{
		for(j=i+1;j<ch;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ch;k++)
					a[k]=a[k+1];
				ch--;
				j--;
			}
		}
	}
	for(i=0;i<ch;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}











