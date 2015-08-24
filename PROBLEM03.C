#include<stdio.h>
#include<conio.h>
void max(int a[],int no)
{
	int i,j,k;
   for(i=0;i<no;i++)
   {
   	for(j=i+1;j<no;j++)
      {
      	if(a[i]<a[j])
         {
      		k=a[i];
            a[i]=a[j];
            a[j]=k;
         }
   	}
   }
   printf("\n enter  k ");
   scanf("%d",&k);
   if(k<=0|| k>no)
   	printf("\n not valid");

	else

   printf("no=%d",a[k-1]);
}
void main()
{
	int a[15],
   i,no;
   clrscr();
   printf("How many no. u want to enter:");
   scanf("%d",&no);
   for(i=0;i<no;i++)
   {
   	printf("\nEnter no.%d:",i+1);
      scanf("%d",&a[i]);
   }
   max(a,no);
   getch();
}


