#include<stdio.h>
struct date
{
	int d,m,y;
}f,s;
void diff (struct date f, struct date s)
{
	int da[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
	int days=0,i;
	if (f.m==2 && f.y%4==0)
		days = days + (29-f.d);
	else
		days = days + (da[f.m-1]-f.d);
	for (i=f.m;i<s.m-1;i++)
	{
		days += da[i];
	}
	days += s.d;
	printf("\nDays=%d",days);
}
void main()
{
	clrscr();
	printf("Enter first date");
	scanf("%d%d%d",&f.d,&f.m,&f.y);
	printf("Enter second date");
	scanf("%d%d%d",&s.d,&s.m,&s.y);
	diff(f,s);
	getch();
}

