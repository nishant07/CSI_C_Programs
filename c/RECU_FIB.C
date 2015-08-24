#include<stdio.h>
#include<conio.h>
void fibo(int no)
{
	static int s=0,i;
	static int n1=0,n2=1;
	if(no==1)
		printf("%d",s);
	else if(no==2)
		printf("%d\t%d",n1,n2);
	else if(i!=no)
	{

		printf("%d\t",s);
		n1=n2;
		n2=s;
		s=n1+n2;
		i++;
		fibo(no);
	 }
}
void main()
{
	int no;
	clrscr();
	printf("Enter limit:");
	scanf("%d",&no);
	fibo(no);
	getch();
}