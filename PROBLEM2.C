#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,c=0,l,k=0;
	char a[100],b[20];
	clrscr();
	printf("Enter string:");
	gets(a);
	l=strlen(a);
	b[0]=a[0];
	b[1]='\0';
	for(i=1;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(b[j]!=a[i])
			{
				k++;
				b[k]=a[i];
				b[k+1]='\0';
			}
			else
				break;
		}
	}
	printf("%s",b);

  /*	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==a[j])
			{

				c++;
				b=a[i];
				break;
			}
		}
		printf("%c %d",b,c);

	} */
	getch();
}














