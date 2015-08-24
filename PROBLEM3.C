#include<stdio.h>
#include<conio.h>
void bin(int no,int ch)
{
	int r;
	if(no!=0)
	{
		if(ch==2 || ch==8)
		{
			r=no%ch;
			no=no/ch;
			bin(no,ch);
			printf("%d",r);
		}

	}

}
void hexa(int no,int ch)
{
	 int r;
	if(no!=0)
	{
			r=no%ch;
			no=no/ch;
			if(r>=0 && r<=9)
			{
				hexa(no,ch);
				printf("%d",r);
			}
			else if(r>=10)
			{
				hexa(no,ch);
				printf("%c",r+55);
			}
	}
}
void main()
{
	int no,ch;
	clrscr();
	printf("Enter no.:");
	scanf("%d",&no);
	printf("\nPress 2 for change no. in binary.");
	printf("\nPress 8 for change no. in octal.");
	printf("\nPress 16 for change no. in hexadecimal.");
	printf("Enter choise:");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 2:
			bin(no,ch);
			break;
		case 8:
			bin(no,ch);
			break;
		case 16:
			hexa(no,ch);
			break;
		default:
			printf("\nWrong choise.");
	}
	getch();
}
