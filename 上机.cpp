#include<stdio.h>
int merge(int a[],int n,int b[],int m,int c[])
{
	int i,j,k;
	i=j=k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			if(k==0||a[i]!=c[k-1])
			{
			  c[k]=a[i];
			  k++;
		    }
			i++;
		}
		else if(a[i]>b[j])
		{
			if(k==0||b[j]!=c[k-1])
			{
				c[k]=b[j];
				k++;
			}
			j++;
		}
		else
		{
			if(k==0||a[i]!=c[k-1])
			{
				c[k]=a[i];
				k++;
			}
			i++;
			j++;
		}
	} 
	while(i<n)
	{
		if(k==0||a[i]!=c[k-1])
			{
			  c[k]=a[i];
			  k++;
		    }
		i++;
	}
	while(j<m)
	{
		if(k==0||b[j]!=c[k-1])
			{
				c[k]=b[j];
				k++;
			}
		j++;
	}
	return k;
}
int main()
{
	printf("enter n,m\n");
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m],c[100];
	printf("enter numbers\n");
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("enter numbers\n");
	for(int j=0;j<m;j++)
	  scanf("%d",&b[j]);
	int countc=merge(a,n,b,m,c);
	for(int i=0;i<countc;i++)
	{
		if(c[i]==0)
		  break;
		printf("%d ",c[i]);
	}
	  
	return 0;
}
