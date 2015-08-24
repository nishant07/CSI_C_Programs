#include<stdio.h>
#include<conio.h>
#include<string.h>
struct name
{
	char n[20],qu[20];
	int d,m,y,co;
}e[10];
void age(struct name a[],int i)
{
	int j,tot[10],d,m,y;
	clrscr();
	printf("\nEnter today's date:");
	scanf("%d/%d/%d",&d,&m,&y);
	for(j=0;j<i-1;j++)
	{
		if(m>a[j].m)
			tot[j]=y-a[j].y;
		else if(m<a[j].m)
			tot[j]=y-a[j].y-1;
		else if(m==a[j].m)
		{
			if(d>=a[j].d)
				tot[j]=y-a[j].y;
			else if(d<a[j].d)
				tot[j]=y-a[j].y-1;
		}
	}
	for(j=0;j<i-1;j++)
	{
		printf("\n %s %d %d/%d/%d %s %d",e[j].n,e[j].co,e[j].d,e[j].m,
						e[j].y,e[j].qu,tot[j]);
	}
}
void main()
{
	int i=0,j;
	FILE *f;
	clrscr();
	f=fopen("name.txt","r");
	while(feof(f)==0)
	{
		fscanf(f,"%s %d %d/%d/%d %s",e[i].n,&e[i].co,&e[i].d,&e[i].m,
						&e[i].y,e[i].qu);
		i++;
	}
	age(e,i);
	fclose(f);
	getch();
}

