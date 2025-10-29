#include<stdio.h>
int main()
{
	int a[10];
	printf("输入10个整数\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int flag=a[0];
	int j,length,temp;
	j=length=temp=1;
	while(j<10)
	{
		if(a[j]==flag)
		{
		    j++;
		    length++;
		    
	    }
	    else
	    {
		    flag=a[j];
		    j++;
		    if(length>=temp)
			{
				temp=length;
			}
		    length=1;
	    }	
	}
	printf("%d\n",temp);
	return 0;
}
