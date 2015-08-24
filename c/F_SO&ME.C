#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,no1,no2,a,b,i;
	FILE *f1,*f2,*f;
	clrscr();
	f1=fopen("File1.txt","wb");
	f2=fopen("File2.txt","wb");
	printf("How many no. u want to ins in f1:");
	scanf("%d",&no1);
	printf("Enter no. in sorted order for f1:");
	for(i=0;i<no1;i++)
	{
		printf("Enter no.%d:",i+1);
		scanf("%d",&n1);
		putw(n1,f1);
	}
	printf("How many no. u want to ins in f2:");
	scanf("%d",&no2);
	printf("Enter no. in sorted order for f2:");
	for(i=0;i<no2;i++)
	{
		printf("Enter no.%d:",i+1);
		scanf("%d",&n2);
		putw(n2,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("File1.txt","rb");
	f2=fopen("File2.txt","rb");
	f=fopen("File.txt","wb");
	a=getw(f1);
	b=getw(f2);
	while (feof(f1)==0 && feof(f2)==0)
	{
		if (a<b)
		{
		      putw(a,f);
		      a=getw(f1);
		}
		else
		{
			putw(b,f);
			b=getw(f2);
		}
	}
	if (feof(f1)==0)
	{
		while (feof(f1)==0)
		{
			putw(a,f);
			a=getw(f1);
		}
	}
	if (feof(f2)==0)
	{
		while (feof(f2)==0)
		{
			putw(b,f);
			b=getw(f2);
		}
	}

	fclose(f1);
	fclose(f2);
	fclose(f);
       f=fopen("File.txt","rb");
	while((a=getw(f))!=EOF)
		printf("%d\n",a);
	getch();
}











