#include<stdio.h>
#include<conio.h>
void main()
{
	int i,t=0,a,j;
	char name[20];
	clrscr();
	printf("Enter the string you want to rotate:");
	scanf("%s",name);

	for(t=1;name[t]!='\0';t++);
//		t++;
	for(j=0;j<=t;j++)
	{
		name[a]=name[0];
		for(i=1;name[i]!='\0';i++)
		{
			name[i-1]=name[i];
		}
		name[t-1]=name[a];
		printf("\n%s",name);
	}
	getch();
}


