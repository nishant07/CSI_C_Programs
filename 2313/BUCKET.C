#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50],r[20],w[20],b[20];
	int i,j,l,k,c=0;
	clrscr();
	printf("\n enter ur flags");
	printf("\n enter 'r' for red");
	printf("\n enter 'w' for white");
	printf("\n enter 'b' for blue");
	printf("\n enter '*' for end");
       //	scanf("%c",&a[0]);
	for(i=0;;i++)
	{
			scanf("%c",&a[i]);
			if(a[i]=='*')
				break;
			c++;

	}

	for(i=0,j=0,k=0,l=0;i<=c;i++)
	{
		if(a[i]=='r'||a[i]=='R')
		{
			r[j]=a[i];
			j++;
		}
		if(a[i]=='w'||a[i]=='W')
		{
			w[k]=a[i];
			k++;
		}
		if(a[i]=='b'||a[i]=='B')
		{
			b[l]=a[i];
			l++;
		}
	}
	strcpy(a,r);
	strcat(a,w);
	strcat(a,b);
	for(i=0;a[i]!='\0';i++)
		printf(" %c",a[i]);
	getch();
}





