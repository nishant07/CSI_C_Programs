#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 char a[20],b[40],a1;
 clrscr();
	printf("Enter string.");
	scanf("%s",a);
	fflush(stdin);
	printf("Enter the character:");
	scanf("%c",&a1);
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		b[j]=a[i];
		j++;
		b[j]=a1;
		j++;
	}
	b[j]='\0';
	printf("%s",b);

 getch();
 }



