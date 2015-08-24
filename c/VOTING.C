#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[5]={0,0,0,0,0},wrong,a;
	char ch;
	clrscr();

	do
	{
		printf("Enter your vote:");
		scanf("%d",&a);
		if(a>5)
		{
			wrong++;
			printf("\n you should enter between 1 and 5.");
		}
		else  if(a>=1 && a<=5)
		{
			n[a-1]++;
		}
		printf("Do you want to continue? ...(Y/N).");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch!='n');
	for(i=0;i<5;i++)
	{

	printf("\n %d's Result is %d",i+1,n[i]);
	}


		getch();
	}





