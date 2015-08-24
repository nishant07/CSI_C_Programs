#include<stdio.h>
#include<conio.h>
#include<string.h>
void doggle(char a[]);
void sent(char a[]);
void uper(char a[]);
void lower(char a[]);
void main()
{
	int i,ch;
	char a[100];
	printf("\n enter any string");
	gets(a);
	printf("\n enter1 for doggle");
	printf("\n enter2 for senense");
	printf("\n enter3 for uper");
	printf("\n enter4 for lower");
	scanf("%d",&ch);
	if(ch==1)
		doggle(a);
	if(ch==2)
		sent(a);
	if(ch==3)
		uper(a);
	if(ch==4)
		lower(a);
	getch();
}
void uper(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{	printf("%c",a[i]-32);
		}
		else
			printf("%c",a[i]);
	}
}
void lower(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{	printf("%c",a[i]+32);
		}
		else
			printf("%c",a[i]);
	}
}
void doggle(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{	printf("%c",a[i]-32);
		}
		else if(a[i]>='A' && a[i]<='Z')
			printf("%c",a[i]+32);
	}
}
void sent(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{	if(a[i]>='a'&&a[i]<='z')
				printf("%c",a[i]-32);
		}
		else
			printf("%c",a[i]);
	}
}

