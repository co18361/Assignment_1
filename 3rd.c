#include<stdio.h>
#include<math.h>
void tri(int x, int y, int z);
void main()
{
int a,b,c;
float s,ss,area;
printf("Enter sides of triangle\n");
scanf("%d %d %d",&a,&b,&c);
tri(a,b,c);
}
void tri(int x, int y, int z)
{
int a,b,c;
float s,ss,area;
s=(x+y+z)/2;
ss=s*(s-x)*(s-y)*(s-z);
area=pow(ss,0.5);
if (area<=0)
	{
	printf("0: Sides cannot form a triangle\n");
	}
else
	{
	printf("1: Triangle is formed\n");
	}
}
