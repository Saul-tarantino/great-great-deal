#include<stdio.h>
#include<math.h>
int main()
{
	double a[4]={3.14,3.141,3.1415,3.14159};
	double b[4]={1.0e-003,1.0e-004,1.0e-005,1.0e-006};
	int i,j,k;
	for(i=0;i<4;i++)
	{
		k=0;
		double pi=0.0;
		for(j=0;fabs(pi-a[i])>b[i];j++)
		{  
		    k++;
			switch(j%2)
			{
				case 1:pi=pi-4/(2*j+1.0);break;
				case 0:pi=pi+4/(2*j+1.0);break;
			}
			
		}
		printf("%d\n",k);
	}
	return 0;
}
