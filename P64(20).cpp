#include<stdio.h>
int main()
{
	int n,length_n,a[100];
	scanf("%d",&n);
	length_n=0;
	for(;n>0;length_n++)
	{
		a[length_n]=n%10;
		n=n/10;
		
	}
	for(int i=0;i<=length_n-1;i++)
	{
		if(a[i]!=a[length_n-1-i])
		{
			printf("no\n");
			goto key;
		}
	} 
	printf("yes\n");
	key:return 0;
}
