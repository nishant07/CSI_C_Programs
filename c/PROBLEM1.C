#include<stdio.h>
#include<conio.h>
void main()
{
	long no,i,r,mul=1,sum=0;
	clrscr();
	printf("Enter the 6 digit number:");
	scanf("%ld",&no);
	if(no%2==0)
	{
		while(no!=0)
		{
			r=no%10;
			sum+=r;
			no/=10;
		}
		printf("The number is even.\nTherfor Sum is %d",sum);

	}
	else
	{
		while(no!=0)
		{
			r=no%10;
			mul*=r;
			no/=10;
		}
		printf("The number is odd.\nTherefor the mul. of digits is %d",mul);

	}
	getch();
}