#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,ch=0,space=0,line=0;
	char a[100],c;
	clrscr();
	printf("\n enter any string \n");
	do{
		c=getchar();
		a[i]=c;
		i++;
	}while(c!='*');
	a[i]='\0';
	ch=i-1;
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
			space++;
		else if (a[i]=='\n')
			line++;
			i++;
	}
	printf("\n char=%d & spaces=%d & wprds=%d & lines=%d",ch-line,space,space+line+1,line);
	getch();
}

