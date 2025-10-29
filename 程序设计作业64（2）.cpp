#include<stdio.h>
int main()
{
	int i='A';
	int j='a';
	for(;i>='A'&&i<='Z';i++)
	  printf("%c ASCALL:%o,%x,%d\n",i,i,i,i);
	for(;j>='a'&&j<='z';j++)
	  printf("%c ASCALL:%o,%x,%d\n",j,j,j,j);
	return 0;
}
