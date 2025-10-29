#include<stdio.h>
int main()
{
	int i,j,k,max,min;
	float average; 
	scanf("%d%d%d",&i,&j,&k);
	max=i,min=i;
	average=(i+j+k)/3.0;
	if(max<j) max=j;
	if(max<k) max=k;
	if(min>j) min=j;
	if(min>k) min=k;
	printf("Æ½¾ùÖµ=%.3f,MAX=%d,MIN=%d\n",average,max,min);
	return 0;	 
}
