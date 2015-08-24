#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *f1,*f2;
	int i,j;
	char a[50],b[50];
	clrscr();
	f1=fopen("one.txt","r");
	f2=fopen("two.txt","r");
	printf("File 1\t\t\tFile 2:\n");
	for(i=0;feof(f1)==0 && feof(f2)==0;i++)
	{
		fgets(a,50,f1);
		fgets(b,50,f2);
		if((strcmpi(a,b))!=0)
			printf("\n%s\t\t\t\t%s\n",a,b);


	}
	if((feof(f1))==0)
		{
			while((feof(f1))==0)
			{
				fgets(a,50,f1);
				printf("%s",a);
			}
		}
	if((feof(f2))==0)
		{
			while((feof(f2))==0)
			{
				fgets(b,50,f2);
				printf("%s",b);
			}
		}
	fclose(f1);
	fclose(f2);
	getch();
}


