#include<stdio.h>
int isperfect(int n)
{
	int temp=0;
	for(int i=1;i<(n/2+1);i++)
	{
		if(n%i==0)
		  temp+=i;
	}
	if(temp==n) 
	  return 1;
	else
	  return 0;
}
int main()
{
	for(int i=2;i<=1000;i++)
	{
		if(isperfect(i))
		  printf("%d ",i);
	}
	return 0;
	/*printf("enter n\n");
	int n;
	scanf("%d",&n);
	if(isperfect(n))
	  printf("%d is a perfect number\n",n);
	else
	  printf("%d is not a perfect number\n",n);
	return 0;*/ 
}
