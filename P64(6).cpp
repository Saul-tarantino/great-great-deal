#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		int i;
		i=n%10;
		printf("%d\t",i);
		n=(n-i)/10;
	}
}
