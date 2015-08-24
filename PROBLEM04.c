#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc,char *argv[])
{
	char ch;
	FILE *f2,*f1;
   clrscr();
   if (argc!=3)
   {
   	printf("\nInvalid Arguments, 3 arguments are required");
      exit(0);
   }
   f1=fopen(argv[1],"r");

   if (f1==NULL)
   {
   	printf("%s file not found",argv[1]);
      exit(0);
   }

   f2=fopen(argv[2],"w");
   while((ch=getc(f1))!=EOF)
   {
      if(ch>='A' && ch<='Y')
      	putc(ch+33,f2);
      else if(ch=='Z')
      	putc('a',f2);
      else if(ch==' ')
      	putc('B',f2);
      else
       	putc(ch,f2);
   }
   fclose(f1);
   fclose(f2);
	getch();
}




