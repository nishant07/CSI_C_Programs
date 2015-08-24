#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,l;


	char a[20],t;
		clrscr();
	printf("\n Enter ur string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n %s",a);

	getch();
}