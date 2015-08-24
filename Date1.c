#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dat
{
	int d,m,y;
}s[2],max,min;
void date(struct dat s[])
{
	int n,tot=0,i;
	if(s[0].y!=s[1].y)
   {
   	printf("\nYou must enter same years:");
      getch();
      exit(0);
    }
    for(i=0;i<2;i++)
    {
    		if(s[i].d<=0 || s[i].m<=0 || s[i].y<=0 || s[i].m>12 )
	      {
   	   	printf("\nInvalid date.");
            getch();
      	   exit(0);
	      }
   	   if(s[i].m==4||s[i].m==6||s[i].m==9||s[i].m==11&&s[i].d>30)
         {
         	printf("\nThis month cannot have this date.");
            getch();
            exit(0);
         }
         if(s[i].m==2 && s[i].d>29)
         {
         	printf("Invalid date.");
            getch();
            exit(0);
         }
         if(s[i].m==2)
         {
         		if(s[i].y%4==0 && s[i].d>=30)
               {
               	printf("Invalid date.");
                  getch();
                  exit(0);
               }
         }
	    if(s[i].m==4||s[i].m==6||s[i].m==9||s[i].m==11)
 	    			tot[i]=s[i].d+(s[i].m*30);
 	    else if(s[i].m==2)
 	   {
		    if( s[i].m%4==0)
	    			tot[i]=s[i].d+(s[i].m*29);
	  	    else
	    			tot[i]=s[i].d+ (s[i].m*28);
	    }
	    else
						tot[i]=s[i].d+ (s[i].m*31);
    }
    if(s[0].m>=s[1].m)
    {
       	max=s[0];
         min=s[1];
    }
       else if(s[0].m<=s[1].m)
    {
       	max=s[1];
         min=s[0];
    }
    	for(i=min.m+1;i<max.m;i++)
      {
           if(i==2)
           {
           	if(s[0].y%4==0)
           		tot+=29;
            else
            	tot+=28;
            }
             else if(i==4||i==6||i==9||i==11)
             tot+=30;
             else
             tot+=31;
      }
      tot+=max.d;
		if(min.m==4||min.m==6||min.m==9||min.m==11)
           			tot+=-min.d+30;
      else if(min.m==2)
             {
      	     		if(min.y%4==0)
           				tot+=29;
		            else
      		      	tot+=28;
             }
      else
         			tot+=-min.d+31;
      pritnf("difference=%d\n",tot);
    for(i=0;i<2;i++)
    {
    		switch(s[i].m)
         {
         	case 1:
            			printf("Jan.");
                     break;
            case 2:
            			printf("Feb.");
                     break;
            case 3:
            			printf("March");
                     break;
            case 4:
            			printf("April");
                     break;
            case 5:
            			printf("May");
                     break;
            case 6:
            			printf("June");
                     break;
            case 7:
            			printf("Jul.");
                     break;
            case 8:
            			printf("Aug.");
                     break;
            case 9:
            			printf("Sep.");
                     break;
            case 10:
            			printf("Oct.");
                     break;
            case 11:
            			printf("Nov.");
                     break;
            case 12:
            			printf("Dec.");
                     break;
       }
            printf("\n");         }
}



void main()
{
	int i;
	clrscr();
   for(i=0;i<2;i++)
   {
   	printf("\nEnter date in format dd/mm/yy %d:",i+1);
      scanf("%d/%d/%d",&s[i].d,&s[i].m,&s[i].y);
   }
	date(s);
   getch();
}

