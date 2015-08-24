#include<stdio.h>
#include<conio.h>
#include<string.h>
void entst(char a[][50],int n)
{
	int i,j;
   char sa[10];
   printf("\nEnter new string.");
   scanf("%s",sa);
   if(strcmp(a[n-1],sa)<0)
   	strcpy(a[n],sa);
   else
   {
   for(i=0;i<n;i++)
   {
   		if(strcmp(sa,a[i])<0 )
         {

	   		for(j=n;j>=i ;j--)

            	strcpy(a[j+1],a[j]);
            strcpy(a[i],sa);
            	break;
         }
   }
   }
   for(i=0;i<n+1;i++)
   	printf("\n %s",a[i]);
}
void main()
{
	char a[10][50];
   int n,i;
	clrscr();
   printf("Enter how many string u want to enter:");
   scanf("%d",&n);
   printf("\nEnter all strings in sorted order.");
   for(i=0;i<n;i++)
   {

  		   printf("Enter string%d:",i+1);
         scanf("%s",a[i]);
   }
   entst(a,n);
   getch();

}
