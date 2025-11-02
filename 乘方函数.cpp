#include<stdio.h>
int power(int x,int n)
{
	if(n==0)
	  return 1;
	else
	  return x*power(x,n-1);
}



int power2(int x,int n)
{
    return n==0?1:x*power(x,n-1);
} 


int main()
{
	int x=10;
	int n=5;
	printf("%d",power2(x,n));
	return 0;
}
