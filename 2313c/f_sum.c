#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,x;
   FILE *f;
   f=fopen("sum.txt","a+");
   while(feof(f)==0)
   {
      	fscanf(f,"%d",&x);
   	   sum+=x;
   }
   printf("%d",sum);
	fprintf(f,"\n%d",sum);
  fclose(f);
	getch();
}
