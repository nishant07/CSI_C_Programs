#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,n;
	FILE *d,*o,*e;
	clrscr();
	d=fopen("data.txt","wb");
	o=fopen("odd.txt","wb");
	e=fopen("even.txt","wb");
	printf("How many no. do you want to enter?");
	scanf("%d",&no);
	printf("Enter no.\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&n);
		putw(n,d);
	}
	fclose(d);
	d=fopen("data.txt","rb");
	while((n=getw(d))!=EOF)
	{
		if(n%2==0)
			putw(n,e);
		else
			putw(n,o);
	}
	fclose(d);
	fclose(o);
	fclose(e);
	o=fopen("odd.txt","rb");
	e=fopen("even.txt","rb");
	printf("\n odd no:");
	while((n=getw(o))!=EOF)
		printf("\n %d",n);
	printf("\n evev no:");
	while((n=getw(e))!=EOF)
		printf("\n %d",n);
	fclose(o);
	fclose(e);
-	getch();
}


