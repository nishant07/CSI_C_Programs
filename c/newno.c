#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],ch,i,n,j;
   printf(" how many nos u wnat to enter ");
   scanf("%d",&ch);
   for(i=0;i<ch;i++)
   {
   	printf("enter  %dth no but in sorted order",i+1);
      scanf("%d",&a[i]);
   }
   printf("\n enter new no");
   scanf("%d",&n);
/*   for(i=1;i<ch;i++)
   {
   	if (a[i]>n)
      {
      	break;
      }
      else
      	continue;
      for(j=ch;j>=i;j--)
      {
      	a[j+1]=a[j];
      }
      a[j]=n;
/*      	for(j=ch;j>i;j--)
         {
      		a[j+1]=a[j];

         }
         a[i]=ch;
      }*/


   for(i=0;a[i]<n;i++);

   if((i-1)==ch)
   	a[i-1]=n;
   else
   {
	   for(j=ch;j>=i;j--)
   		a[j+1]=a[j];
	   j++;
   	a[j]=n;
   }
   for(i=0;i<ch+1;i++)
   	printf("%d ",a[i]);
   getch();
}


