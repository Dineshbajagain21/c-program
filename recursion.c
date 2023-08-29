#include<stdio.h>
int fact(int);
int main()
{
	int result=0,n=0;
	printf("enter numfor ");
	scanf("%d",&n);
	result=fact(n);
	printf("The result is %d",result);
	return 0;

}
int fact(int m)
{
	if(m>0)
	{
		return m*(fact(m-1));
	}
	else
	{
		return 1;
	}
}
