#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *p;
int x=0;
p=fopen("D:\\filehandling\\gita.txt","w+");
if(p==NULL)
{
	printf("sorry cant open");
	exit(0);
	
}
printf("entr\er num for x: ");
scanf("%d",&x);
fprintf(p,"%d",x);







return 0;
}
