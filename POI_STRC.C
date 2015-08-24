#include<stdio.h>
#include<conio.h>
#include<string.h>
void stcop(char *b,char *a)
{
	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';
	printf("%s",b);
}
void main()
{
	char a[100],b[100];
	clrscr();
	printf("Enter string:");
	gets(a);
	stcop(b,a);
	getch();

}