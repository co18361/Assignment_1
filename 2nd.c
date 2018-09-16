#include<stdio.h>
void multi(int x, int y);
void main()
{
int a,b,c;
printf("Enter two numbers a and b to find if b is multiple of a\n");
scanf("%d %d",&a,&b);
multi(a,b);
}
void multi(int x, int y)
{
int a,b,c;
if(x%y==0)
	{
	printf("A/B is %d : B is multiple of A\n",x/y);
	}
else
	{
	printf("0: B is not a multiple of A\n");
	}
}
