/*
	*
      * * *
    * * * * *
  * * * * * * *
  * * * * * * *
    * * * * *
      * * *
	*
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l,z,sp=40,k,m=1;
	clrscr();
	printf("Enter ur limit");
	scanf("%d",&l);
	for(i=l;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=m;j++)
		printf("*");
		printf("\n");
		m+=2;sp--;
	}

	m=2*l;
	for(i=l;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=m;j>1;j--)		// it is another way of that
			printf("*");
		printf("\n");
		m-=2;
		sp++;
	}
	getch();
}
//SECOND WAY TO SOLVE THIS
//sp-=1;
	  /*	for(k=i;k>=1;k--)
			printf("*");
		for(z=k+2;z<=l;z++)
			printf("*");*/


