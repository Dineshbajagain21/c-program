#include<Stdio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=1;i<=5;i++)
	{
	   for(k=4;k>=i;k--)
		{
	   printf(" ");
		}
	    for(j=1;j<=2*i-1;j++)
		{
		printf("*");
		
		}
		printf("\n");	
	}
	
	for(i=5;i>=1;i--)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
}
