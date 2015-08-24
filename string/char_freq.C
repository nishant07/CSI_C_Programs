//it will count no of  charecter repeated from a word
//find every charecters frequency
#include<stdio.h>
void main()
{
	char a[20],s[20];
	int i,c=0,j=0,f,k;
	printf("Enter string");
	scanf("%s",a);
	for (i=0;a[i]!='\0';i++)
	{
	      f=0;
	      for (k=0;k<i;k++)
	      {
		  if (a[i]==s[k])
		  {
			f=1;
			  break;
		  }
	      }
	      if (f==0)
	      {
		s[j]=a[i];
		j++;
	      }
	}
	s[j]='\0';
	for (i=0;s[i]!='\0';i++)
	{
		c=0;
		for (j=0;a[j]!='\0';j++)
		{
			if (s[i]==a[j])
			c++;
		}
		printf("\n %c ---%d",s[i],c);
	}
	getch();
}

