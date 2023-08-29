#include<stdio.h>
#include<stdlib.h>
int main()
{
char x[50];
	FILE *p;
	p=fopen("D:\\filehandling\\gita.txt","r");
	if(p==NULL)
	{
		printf("the erorr occur");
		exit(0);
	}

	fgets(x,90,p);
	printf("%s",x);
	return 0;
}
