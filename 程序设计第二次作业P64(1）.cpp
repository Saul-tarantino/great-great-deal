#include<stdio.h>
int main()
{
	long i;
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%ld",&i);
	start:if(i>0)
	{
		while(i>0){
			int j=i%10;
			a[j]+=1;
			i=(i-j)/10;
		}
		printf("该整数由%d个0，%d个1，%d个2，%d个3，%d个4，%d个5，%d个6，%d个7，%d个8，%d个9组成",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	}
	else if(i<0){
		i=-i;
		goto start;
	} 
	else printf("该整数由1个0组成\n");
	return 0; 
}
