#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int i,j,bl=0,br=0,rl=0,rr=0,q=0,semi=0;
	FILE *f;
	char ch;
	clrscr();
	f=fopen(argv[1],"r");
	if(f==NULL)
	{
		printf("FILE not found.\n");
		getch();
		exit();
	}
	while(feof(f)==0)
	{
		ch=getc(f);
		if(ch=='{')
			bl++;
		if(ch=='}')
			br++;
		if(ch=='(')
			rl++;
		if(ch==')')
			rr++;
	}
	if(bl>br)
		printf("Error:U have missed %d brackets like'}'\n",bl-br);
	else if (bl<br)
		printf("Error:U have missed %d brackets like'{'\n",br-bl);
	else
		printf(":ur brackets are perfect\n");
	if(rl>rr)
		printf("Error:U have missed %d  brackets like')'\n",rl-rr);
	else if (rl<rr)
		printf("Error:U have missed %d brackets like'('\n",rr-rl);
	else
		printf("ur round brackets are perfect\n");


	fclose(f);
	getch();
}



