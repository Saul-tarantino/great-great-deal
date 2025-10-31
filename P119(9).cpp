#include<stdio.h>
int temp=0; 
int reverse(int n)
{
	if(n<10)
	  return temp*10+n%10;
	else
	{
		temp=temp*10+n%10;
		n/=10;
		return reverse(n);	
	}
}
int main()
{
	
	int n;
	do
	{
	  printf("enter n\n");
	  scanf("%d",&n);
	}
	while(n%10==0);
	int reversenum=reverse(n);
	printf("%d\n",reversenum);
	return 0;
}
