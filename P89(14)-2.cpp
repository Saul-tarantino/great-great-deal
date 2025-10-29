#include<stdio.h>
#define max 10
int a[max][max];
int main()
{
	int n,i,j,k,d;
	k=i=j=1;
	int x,y;
	printf("enter n\n");
	scanf("%d",&n);
	for(d=0;d<n/2;d++)
	{
		x=y=d;
		int end=n-d-1;
		for(j=y;j<=end;j++)
		{
			a[x][j]=k++;
		}
		for(i=x+1;i<=end;i++)
		{
			a[i][end]=k++;
		}
		if(x<end){
			for(j=end-1;j>=y;j--)
			{
				a[end][j]=k++;
			}
		}
		if(y<end)
		{
			for(i=end-1;i>x;i--)
			{
				a[i][y]=k++;
			}
		}
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	  printf("%d\t",a[i][j]);
	 	printf("\n");
	  } 
	return 0;
}
 
