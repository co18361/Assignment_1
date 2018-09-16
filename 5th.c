#include <stdio.h>
#include <stdlib.h>

int main ()
{
char ipAddr[20]; //= "192.168.1.255";
scanf("%s",ipAddr);
int a=0,b=0,c=0,d=0,e=0;
int con = sscanf(ipAddr, "%d.%d.%d.%d.%d", &a, &b, &c, &d, &e);
if ( con == 4 )
{
printf("scanned ip=%s had %d octets\n a=%d, b=%d, c=%d, d=%d\n", ipAddr, con, a, b, c, d);
if ((0<=a && a<=255) && (0<=b && b<=255) && (0<=c && c<=255) && (0<=d && d<=255) )
printf("valid ip address\n");
else
printf("not valid ip address\n");
}
else
{
printf("malformed ip address\n");
}
return 0;

}
