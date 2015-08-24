#include<stdio.h>
#include<string.h>
void main()
{
char str[10][100],tmp[100],news[50];
int i,c,j;
clrscr();
for (i=0;i<3;i++)
{
scanf("%s",str[i]);
}
/* Sorting */
for (i=0;i<3;i++)
{
	for (j=i+1;j<3;j++)
	{
	     c=strcmp(str[i],str[j]);
	     if (c>0)
	     {
	     strcpy(tmp,str[i]);
	     strcpy(str[i],str[j]);
	     strcpy(str[j],tmp);
		     }
	 }
}

for (i=0;i<3;i++)
{
printf("\n%s",str[i]);
}
printf ("Enter new string that you want to insert ");
scanf("%s",news);
/* inserting first */
c=strcmp(news,str[0]);
if (c<0)
{
  for (i=4;i>=1;i--)
  {
    strcpy(str[i],str[i-1]);
  }
  strcpy(str[0],news);
goto a;
}
/* inserting at end */
c=strcmp(news,str[2]);
if (c>0)
{
strcpy(str[3],news);
goto a;
}
/* inserting middle */
for (i=0;i<3;i++)
{
	c=strcmp(str[i],news);
	if (c>0)
	{
	   for (j=4;j>=i;j--)
	   {
	     strcpy(str[j],str[j-1]);
	   }
	strcpy(str[i],news);
	break;
	}
}
a:
for (i=0;i<4;i++)
{
printf("\n%s",str[i]);
}

 getch();
}



