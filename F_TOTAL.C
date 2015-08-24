#include<stdio.h>
#include<conio.h>
void main()
{
	int no[5],qty[5],rate[5],tot[5]={0,0,0,0,0},i,j;
	char name[5][20];
	FILE *f1,*f2;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter no %d",i+1);
		scanf("%d",&no[i]);
		printf("Enter qty %d",i+1);
		scanf("%d",&qty[i]);
		printf("Enter rate %d",i+1);
		scanf("%d",&rate[i]);
		printf("Enter name %d",i+1);
		scanf("%s",name[i]);
	}
	f1=fopen("file1.txt","w");
	fprintf(f1,"No.\t Name \t Qty \t Rate:\n");
	for(i=0;i<3;i++)
			fprintf(f1,"%d %s %d %d\n",no[i],name[i],qty[i],rate[i]);
	fclose(f1);
	f1=fopen("file1.txt","r");
	for(i=0;i<3;i++)
	{
		fscanf(f1,"%d %s %d %d",&no[i],name[i],&qty[i],&rate[i]);
		tot[i]=qty[i]*rate[i];
	}
	fclose(f1);
	printf("No.\t Name \t Qty \t Rate \t Total\n");
	for(i=0;i<3;i++)
		printf("%d \t %s \t %d \t %d \t %d\n",no[i],name[i],qty[i],rate[i],tot[i]);
	getch();



}