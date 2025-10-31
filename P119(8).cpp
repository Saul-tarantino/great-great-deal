#include<stdio.h>
int gcd(int a,int b)
{
	if(a==b)
	  return a;
	else if(a>b)
	  return gcd(a-b,b);
	else
	  return gcd(a,b-a);
}
int main()
{
	printf("enter a and b\n");
	int a,b;
	scanf("%d %d",&a,&b);
	int minab=gcd(a,b);
	printf("%d",minab);
	return 0;
}
