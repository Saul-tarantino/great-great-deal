#include<stdio.h>
#include<math.h>
int timeconvert(int i,int j,int k)
{
	int second=3600*i+60*j+k;
	return second;
}
int main()
{
	int i1,j1,k1,i2,j2,k2,m,n;
	printf("enter the time\n");
	scanf("%d %d %d %d %d %d",&i1,&j1,&k1,&i2,&j2,&k2);
	m=timeconvert(i1,j1,k1);
	n=timeconvert(i2,j2,k2);
	printf("%d %d %d",m,n,abs(m-n));
	return 0;
}
