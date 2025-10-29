#include<stdio.h>
int main()
{
	printf("enter n\n");
	int n;
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		if(j==1||j==2||j==n)
		{
			for(int i=1;i<=j;i++)
		      printf("%c",'*');
		    printf("\n");
		}
		else
		{
			for(int i=1;i<=j;i++)
			{
				if(i==1||i==j)
				  printf("%c",'*');
				else
				  printf("%c",' ');
			}
		    printf("\n");
		}
	}
	return 0;
}
