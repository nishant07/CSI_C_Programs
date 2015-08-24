#include<stdio.h>
#include<conio.h>
#include<string.h>
struct data
{
	int no,tot;
	char name[20];
}a[10];
void main(int argc,char *argv[])
{
	int i,j,f1=0;
	FILE *f;
	char s[20];
	clrscr();
	f=fopen("data.txt","r");
	if(f==NULL)
	{
		printf("File not found.");
		getch();
		exit();
	}
	i=0;
	scanf("%s",s);
	while (feof(f)==0)
	{
		fscanf(f,"%d\t%s\t%d\n",&a[i].no,a[i].name,&a[i].tot);
		i++;
	}

	 for(j=0;j<i;j++)
			printf("%d %s %d\n",a[j].no,a[j].name,a[j].tot);

	if((strcmp(s,"name"))==0)
	{
		for(j=0;j<i-1;j++)
		{
			if((strcmpi(a[j].name,a[j+1].name))>0)
			{
				f1=1;
				break;
			}
		}
		if(f1==1)
			printf("\nIs not sorted.");
		else
			printf("\nIs sorted");
	}

	fclose(f);
	getch();
}









