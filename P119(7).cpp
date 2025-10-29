#include<stdio.h>
int prime(int i)
{
	if(i<=1)
	  return 0;
	for(int j=2;j*j<=i;j++)
	{
	  if(i%j==0)
		return 0;
	}  
  	return 1;
}

int main()
{
	for(int i=1;i<=1000;i++)
	{
		if(prime(i))
		  printf("%d ",i);
	}
	return 0;
}
