#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int no)
{
	static int s=0;
	if(no>0)
	{
		s=s+(no%10);
		no=no/10;
		sum(no);
	}
	else
		printf("\n %d",s);

}
void main()
{
	int no,s;
	clrscr();
	printf("\n enter ur no");
	scanf("%d",&no);
	sum(no);

	getch();
}

