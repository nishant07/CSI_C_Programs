#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,count;
	char st[30],ch[10];
	clrscr();
	printf("Enter the string.");
	gets(st);
	printf("Enter the word you want to search");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++);
	n=i;				//we can use strlen
	for(i=0;st[i]!='\0';i++)
	{
		count=0;
		if(st[i]==ch[i])
		{
			for(j=i;j<n;j++)
			{
				if(st[j]!=ch[j])
				{	count++;
					break;
				}

			}
		}
	}
		if(count==n-1)
			printf("Is on %d th position.",i+1);
	getch();
}


