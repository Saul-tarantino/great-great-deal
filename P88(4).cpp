#include<stdio.h>
int main()
{
	int a[10],b[10];
	printf("ÊäÈë10¸öÊı\n");
	for(int i=0;i<10;i++)
	  scanf("%d",&a[i]);
	b[0]=a[0];
	int j=1;
	int l=1;
	for(;j<10;j++)
	{
		int temp=0;
		for(int k=0;k<j;k++)
		{
			if(a[j]!=a[k])
			  temp+=1;	 
		}
		if(temp==j)
		{
			b[l]=a[j];
			l++;
		}
	}
	for(int m=0;m<l;m++)
	printf("%d\t",b[m]);
	return 0;
	 
}
