#include<stdio.h>
int main()
{
	printf("输入个数\n");
	int n,max;
	scanf("%d",&n);
	int a[n];
	printf("输入元素\n");
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
	max=a[0];
	for(int j=0;j<n;j++)
	{
		int temp1,temp2;
		temp1=temp2=a[j];
		for(int k=1;k+j<n;k++)
		{
			temp2+=a[j+k];
			if(temp2>=temp1)
			  temp1=temp2;
		}
		if(temp1>=max)
		  max=temp1;	
	}
	printf("%d\n",max);
	return 0;
}
