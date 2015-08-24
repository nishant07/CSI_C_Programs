#include<stdio.h>
#include<conio.h>
void main()
{
	int sq,f=0,n[182],s[182];
	float i,no,j;
	clrscr();
	printf("Enter number betwwen -10000 to +10000 :");
	scanf("%f",&no);
	if(no<0)
	{
		no*=-1;
		f=1;
	}
	for(i=0;i<=181;i++)
	{
		n[i]=i*i;
		s[i]=i;
	}
	i=0.0;
	while(n[i]<=no)
		i++;
	for(j=i-1;j<=i;j=j+0.0000001)
	{
		if((int)(j*j)==(int)no)
			break;
	}
	if(f==1)
		printf("Square root is %fi",j);
	else
		printf("Square root is %f",j);
	getch();
}
