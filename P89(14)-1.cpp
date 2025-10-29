#include<stdio.h>
#define max 10
int a[max][max];
int main()
{
	int i,j,k,d,n;
	printf("enter n\n");
	scanf("%d",&n);
	for(k=d=1;d<=2*n-1;d++)
	{
		if(d<=n-1)
		{
			if(d%2)
		    {
			  for(i=d-1,j=0;i>=0;i--,j++)
			  {
				a[i][j]=k++;
			  }
		    }
		    else
		    {
			  for(i=0,j=d-1;j>=0;i++,j--)
			  {
			  	a[i][j]=k++;
			  }
		    }
		}
		else
		{
			if(d%2)
			{
				for(i=n-1,j=d-n;j<=n-1;i--,j++)
				{
					a[i][j]=k++;
				}
			}
			else
			{
				for(i=d-n,j=n-1;i<=n-1;i++,j--)
				{
					a[i][j]=k++;
				}
			}
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
