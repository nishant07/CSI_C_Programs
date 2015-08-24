#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char a[],int l)
{
	static int i=0;
	char t;
	if(i<(l/2))
	{
		t=a[i];
		a[i]=a[l-(i+1)];
		a[l-(i+1)]=t;
		i++;
		rev(a,l);
	}
	else
	printf("%s",a);
}
void main()
{
	int l;
	char st[10];
	clrscr();
	printf("Enter the string:");
	scanf("%s",st);
	l=strlen(st);
	rev(st,l);
	getch();
}
