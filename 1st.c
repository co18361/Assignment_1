#include<stdio.h>
void check(int x);
void main()
{
int a,b,c,d,e,f;
printf("Enter a 3 digit number\n");
start:
scanf("%d",&a);
if (a>=100 && a<=999)
	{
	check(a);
	}
else
	{
	printf("Please enter a valid number\n");
	goto start;
	}
}
void check(int x)
{
	int a,b,c,d,e,f,g;
	b=x%10;
	c=x/10;
	d=c%10;
	e=c/10;
	f=e%10;
	if((b==d)||(b==f)||(d==f))
	{
	printf("0: Digit is repeated\n");
	}
	else
	{
	printf("1: No digit repeated\n");
	}
}
