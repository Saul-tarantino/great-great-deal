#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int m;
	int i=0;
	printf("输入小于10的正整数\n");
	scanf("%d",&m);
	while(i<m)
	{
		int temp;
		temp=a[0];
		for(int j=1;j<10;j++)
		  a[j-1]=a[j];
		a[9]=temp;
		i++;		
	}
	for(int k=0;k<10;k++)
	  printf("%d\t",a[k]);
	return 0;
}
