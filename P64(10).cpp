#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3,y1,y2,y3;
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	if((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1))
	  printf("不能构成三角形\n");
    else
    {
    	/*float a,b,c;
    	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    	float p=(a+b+c)/2.0;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形面积为%.6f",s);*/
		float s;
		s=fabs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/2.0;
		printf("三角形面积为%.6f",s);
	}
	return 0;
}
