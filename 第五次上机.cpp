#include<stdio.h>
int main()
{
	printf("输入个数\n");
	int n,temp;
	scanf("%d",&n); 
	int a[n];
	printf("输入元素\n");
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
    for(int j=0;j<n-1;j++)
    {
    	for(int k=0;k<n-j-1;k++)
    	{
    		if((a[k]%2==0)&&(a[k+1]%2==1)||(a[k]%2==1&&a[k+1]%2==1&&a[k+1]<a[k])||(a[k]%2==0&&a[k+1]%2==0&&a[k+1]>a[k])) 
    		{
			  temp=a[k];
    		  a[k]=a[k+1];
    		  a[k+1]=temp;
			} 
		}
	}
	for(int l=0;l<n;l++)
	  printf("%d\t",a[l]);
	return 0;
}
