#include<stdio.h>
#include<conio.h>
struct std
{
	int rollno,marks[5];
	int tot;
}s[10],s1;

void main()
{
	int i,j;
	FILE *f,*f1;
	clrscr();
	f=fopen("pro.txt","rb");
		f1=fopen("pro1.txt","w");

		i=0;
	while(feof(f)==0)
	{

		fscanf(f,"%d ",&s[i].rollno);
		fprintf(f1,"%d ",s[i].rollno);
		printf("%d ",s[i].rollno);
		for(j=0;j<5;j++)
		{

			fscanf(f,"%d ",&s[i].marks[j]);
			s[i].tot+=s[i].marks[j];
		}
		fprintf(f1,"%d ",s[i].tot);
		fprintf(f1,"\n");
		printf("%d \n",s[i].tot/5);
		i++;
	}
	fclose(f);
	fclose(f1);


	getch();
}