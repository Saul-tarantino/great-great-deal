#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	n+=1;
	for(i=n-1;i>0;i--)
	{
		printf("%*c",i,' ');
		for(j=1;j+i<=n;j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	
	
	return 0;
}
