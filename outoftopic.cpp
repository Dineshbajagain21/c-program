#include<stdio.h>
int main()
{

	int i=0,total=0,w=0,al=0,sp=0,v=0,c=0,n=0,s=0;
	char a[100];
	printf("Enter the sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	
	{
			total++;
		if(a[i]==32)
		{
			sp++;
		}
		   if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		  {
			al++;
	  
	  	  if(a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
		 {
			v++;
		 }
		 else
		 {
			c++;
		 }
        	}
    
    
		else if(a[i]>=48 && a[i]<=57)
		  {
			n++;
	 	  
	     }
		 else
	  	{
			s++;
			
		 }
 }
s=s-sp;
	printf("Space = %d",sp);
	printf("\nAlphabet = %d",al);
	printf("\nVowel = %d",v);
	printf("\nConsonant = %d",c);
	printf("\nNumber = %d",n);
	printf("\nSpecial character = %d",s);
	printf("\nTotal=%d",total);
	return 0;

}


