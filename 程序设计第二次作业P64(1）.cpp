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
		printf("��������%d��0��%d��1��%d��2��%d��3��%d��4��%d��5��%d��6��%d��7��%d��8��%d��9���",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	}
	else if(i<0){
		i=-i;
		goto start;
	} 
	else printf("��������1��0���\n");
	return 0; 
}
