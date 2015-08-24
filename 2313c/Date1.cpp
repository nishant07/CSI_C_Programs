#include<stdio.h>
#include<conio.h>
struct dat
{
	int d,m,y;
}s[2];
void date(struct dat s[])
{
	int n,tot;
	if(s[0].y!=s[1].y)
   {
   	printf("You must enter same years:");
      exit();
    }
    for(i=0;i<2;i++)
    {
    	if(s[i].d<=0 || s[i].m<=0 || s[i].y<=0)
      {
      	printf("Invalid 
void main()
{
	int i;
	clrscr();
   for(i=0;i<2;i++)
   {
   	printf("Enter date in format dd/mm/yy %d:",i+1);
      scanf("%d/%d/%d",&s[i].d,&s[i].m,&s[i].y);
   }
	date(s);
   getch();
}

