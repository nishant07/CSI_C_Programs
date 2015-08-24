#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(/*int argc, char *argv[]*/)
{
	FILE *f1;
	char c[100],a[20],ch,m,line[100]={'\0'};
	int i,j,k,b,f,n=0,z;	clrscr();
	f1=fopen(/*argv[1]*/"one.txt","r");
	printf("Enter your choice:");
	scanf("%s",a);
	for(i=0;feof(f1)==0;i++)
	{
		fscanf(f1,"%s",c);
		if(getc(f1)=='\n')
		{
			strcat(line,c);
			strcat(line," ");
			n++;
		}
		if(strcmpi(a,c)==0)
		{
			printf("\nThe word is in the line %d",n);
			printf("\n nthe line is :%s",line);
		}
	  }
		  /*	j=0;
			k=0;
			ch=getc(f1);
		     fscanf(f1,"%c",ch);
			while(ch!='\n' && feof(f1)==0)
			{
			     fseek(f1,-1L,1);

				fscanf(f1,"%c",ch);
				while(ch!=' ' && feof(f1)==0 && ch!='\n')
				{

				     //	if(ch=='.' )
				       //		break;
					line[i][j][k]=ch;
					fscanf(f1,"%c",ch);
					k++;
				}

				j++;
			}


	}
/*	rewind (f);
	z=0;
	for(i=0;feof(f)==0;i++)
	{
		ch=getc(f);
		while(ch=='\n')
		{
			q++;
			if(q==t[z])
			{
				printf("%c",ch);
			   //	z++;
		    //	}
		  }
	}
	for(b=0;b<i;b++)
	{
		for(f=0;f<j;f++)
		{
			if((strcmpi(line[b][f],a))==0)
			{
				printf("\n Line no:%d",b+1);
				printf("\n line=%s",line[b]);
			}
		}
	}                                */
	fclose(f1);
	getch();
}
