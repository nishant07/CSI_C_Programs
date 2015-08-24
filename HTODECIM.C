#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void htod(char a[]);
void main()
{
	char a[100];

	clrscr();
	printf("Enter the hexadecimal number:");
	scanf("%s",a);
	htod(a);
	getch();
}
void htod(char a[])
{
	int sum=0,i,l,no;
	l=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
			no=a[i]-48;
		else
		{
			if(a[i]>='a' && a[i]<='f')
			{
				a[i]-=32;
				no=a[i]-55;
			}
			if(a[i]>='A' && a[i]<='F')
				no=a[i]-55;
			else
			{
				printf("\n not valid");
				break;
			}

		}
		l--;
		sum=sum+no*pow(16,l);
	}
		printf("%d",sum);

}











