#include<stdio.h>
#include<conio.h>
#include<string.h>
struct tele
{
	long phone;
	char name[20];

} ;
struct tele dir[50],t;
int i=0;
void add(struct tele dir[],FILE *f)
{
	f=fopen("tele.txt","a");

	printf("\n enter name");
	scanf("%s",dir[i].name);
	printf("\n enter tele no");
	scanf("%ld",&dir[i].phone);
	fprintf(f,"%s %ld\n",dir[i].name,dir[i].phone);
	i++;
	fclose(f);
}
void disp(struct tele dir[],FILE *f)
{
	int j=0,x,y;
	f=fopen("tele.txt","r");
	printf("\nName\tNo");
	printf("\n--------\n");
	while (feof(f)==0)
	{
		fscanf(f,"%s %ld\n",dir[j].name,&dir[j].phone);
		j++;
	}
	for(x=0;x<j;x++)
	{
		for(y=x+1;y<j;y++)
		{
			if((strcmpi(dir[x].name,dir[y].name))>0)
			{
				t=dir[x];
				dir[x]=dir[y];
				dir[y]=t;
			}
		}
	}
	for(x=0;x<j;x++)
		printf("%s %10ld\n",dir[x].name,dir[x].phone);

	fclose(f);
}
void edit(struct tele dir[],FILE *f)
{
	int k,c2,j=0;
	long s3,s4;
	char s1[20],s2[20];
	f=fopen("tele.txt","r");
	while(feof(f)==0)
	{

		fscanf(f,"%s %ld\n",dir[j].name,&dir[j].phone);
		j++;
	}
	printf("Press 1 for edit name");
	printf("\nPress 2 for edit no");
	printf("\nEnter your choice:");
	scanf("%d",&c2);
	if(c2==1)
	{
		printf("\n enter name which u want to edit");
		scanf("%s",s1);
		printf("\n enter new name ");
		scanf("%s",s2);

	}
	if(c2==2)
	{
		printf("\n enter No which u want to edit");
		scanf("%ld",&s3);
		printf("\n enter new no ");
		scanf("%ld",&s4);
		for(k=0;k<j;k++)
		{
			if(s3==dir[k].phone)
			{
				dir[k].phone=s4;
				break;
			}
		}
	}
	if(k==j)
		printf("Not found.\n");
	fclose(f);
	f=fopen("tele.txt","w");
	for(k=0;k<j;k++)
		fprintf(f,"%s\t%ld\n",dir[k].name,dir[k].phone);
	fclose(f);
}
void search(struct tele dir[],FILE *f)
{
	int ch,c3,j=0,k;
	long l;
	char s[20];
	f=fopen("tele.txt","r");
	while(feof(f)==0)
	{
		fscanf(f,"%s %ld\n",dir[j].name,&dir[j].phone);
		j++;
	}
	printf("\nPress 1 for search by name.");
	printf("\n Press 2 for search by no.");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	if(ch==2)
	{
		printf("\nEnter no. you want to search:");
		scanf("%ld",&l);
		for(k=0;k<j;k++)
		{
			if(l==dir[k].phone)
			{
				printf("\nName=%s",dir[k].name);
				break;
			}
		}
	}
	if(ch==1)
	{
		printf("\nEnter name you want to search:");
		scanf("%s",s);
		for(k=0;k<j;k++)
		{
			if((strcmp(s,dir[k].name))==0)
			{
				printf("\nPhoneno.=%ld",dir[k].phone);
				break;
			}
		}
	}
	if(k==j)
		printf("Not found.\n");
	fclose(f);
}
void del(struct tele dir[],FILE *f)
{
	int j=0,x;
	char s[20];
	f=fopen("tele.txt","r");
	while(feof(f)==0)
	{
		fscanf(f,"%s %ld\n",dir[j].name,&dir[j].phone);
		j++;
	}
	fclose(f);
	f=fopen("tele.txt","w");
	printf("\nEnter name which u want to del:");
	scanf("%s",s);
	for(x=0;x<j;x++)
	{
		if((strcmp(dir[x].name,s))!=0)
		fprintf(f,"%s %ld\n",dir[x].name,dir[x].phone);
	}
	if(x==j)
	printf("Not found.");
	fclose(f);
}
void main()
{
	int ch;
	FILE *f;
	clrscr();
	printf("name no");
	while(1)
	{       clrscr();
		printf("-----------------\n");
		printf("press1 for add data\n");
		printf("press2 for Edit data\n");
		printf("press3 for search\n");
		printf("press4 for display\n");
		printf("press5 for delete\n");
		printf("press6 for exit\n");
		printf("-----------------\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add(dir,f);
				break;
			case 2:edit(dir,f);
				break;
			case 3:search(dir,f);
				break;
			case 4:disp(dir,f);
				break;
			case 5:del(dir,f);
				break;
			case 6:exit(0);
				break;
		}
		getch();
	}


}