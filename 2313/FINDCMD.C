#include<stdio.h>
void main()
{
	FILE *fp;

	char l[100],s[20],w[20];
	int n=0,i,j=0;
	clrscr();
		fp = fopen("one.txt","r");
		printf("Enter word to be searched:");
		scanf("%s",s);
	while (feof(fp)==0)
	{       i=0;
		fgets(l,80,fp);
		n++;
		for (i=0;i<80;i++)
		{
			while (l[i]!=' '&&l[i]!= '\0')
			{

				w[j]=l[i];
				j++;
				i++;
			}
			w[j]='\0';
			j=0;
			if (strcmp (w,s)==0)
			{
				printf("%d",n);
				fputs(l,stdout);
			       break;
			}


	}
}
	getch();
}