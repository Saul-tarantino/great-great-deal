#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(!(a<b+c&&b<a+c&&c<a+b))
	  printf("无法构成三角形\n");
	else
	{
		float p=(a+b+c)/2.0;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形面积为%.6f",s);
	}
	return 0;
 } 
