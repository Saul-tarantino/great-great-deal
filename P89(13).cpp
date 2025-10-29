#include<stdio.h>
int rotatematrix(int a[][100],int n)
{
	for(int layer=0;layer<n/2;layer++)
	{
		int start=layer;
	  int end=n-1-layer;
	  for(int p=start;p<end;p++)
	  {
	  	int temp=a[start][p];
	    a[start][p]=a[end-p+start][start];
	    a[end-p+start][start]=a[end][end-p+start];
	    a[end][end-p+start]=a[p][end]; 
	    a[p][end]=temp;
	  }
	}
    return 0;  
}
int main()
{
	printf("输入n\n");
	int n;
	scanf("%d",&n);
	int a[100][100];
	printf("输入%d个数\n",n*n);
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
	rotatematrix(a,n);
	for(int m=0;m<n;m++)
	{
		for(int l=0;l<n;l++)
	      printf("%d\t",a[m][l]);
	    printf("\n");
    }    
	return 0;	
}
