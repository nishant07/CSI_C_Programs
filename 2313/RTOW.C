#include<stdio.h>
char s[20][20]= {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
char d[10][20]= {"Twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
int m1,t;
int r,m1,m2,m3,m4,t;
void dd (int r)
{

	if (r<=19)
		printf("%s",s[r]);
	else
	{
	m1=r%10;
	t=r/10;
	  if (m1==0)
		printf("%s",d[(r-20)/10]);
	  else
		printf("%s %s",d[t-2],s[m1]);
	}
}
void td (int r)
{

		t=r;
		m1=r%10;
		r=r/10;
		m2=r%10;
		r=r/10;
		if (m1==0 && m2==0)
			printf("%s Hundred",s[r]);
		else
		{
		       printf("%s hundred ",s[r]);
		       dd(t%100);
		}

}
void main()
{

	clrscr();
	printf("Enter rs");
	scanf("%d",&r);
	if (r<=99)
	{
		dd(r);
		printf(" only");
	}
	else if (r<=999)
	{
		td(r);
		printf(" only");
	}
	else if (r<=9999)
	{
		if (r%1000==0)
		printf("%s thousand only",s[r/1000]);
		else
		{
			printf("%s thousand ",s[r/1000]);
			if (r%1000<=99)
			dd(r%1000);
			else
			td(r%1000);
			printf(" only");
		}
	}
	getch();
}