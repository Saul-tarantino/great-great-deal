#include<stdio.h>
int main()
{
	for(int i=100;i<1000;i++)
	{
		int a,b,c;
		a=i%10;
		b=(i-a)%100/10;
		c=(i-10*b-a)/100;
		if(i==a*a*a+b*b*b+c*c*c)
		   printf("%d\n",i);
	}
	return 0;
}
