#include<stdio.h>
int reverseNumber(int num) 
{
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main()
{
	int n,m;
	int a[10000]={n,0};
	int i=1;
	scanf("%d",&n);
	printf("%d\n",n);
	while(1)
	{
		m=reverseNumber(n);
	    if(m>n)
	    {   
	    	n=m-n;
	    	for(int k=0;k<=i;k++)
	    	{
	    		if(n==a[k]) goto key;
			}
	        printf("%d\n",n);
		}
      	else if(m<n)
      	{   
      		n=n-m;
      		for(int k=0;k<=i;k++)
	    	{
	    		if(n==a[k]) goto key;
			}
    	    printf("%d\n",n);
		}
    	else
		{
    		n=0;
			printf("%d\n",n);
			break;
		}
		
		a[i]=n;
		i++;
	    
	}
	key:printf("Ñ­»·");
	return 0;
	
}
