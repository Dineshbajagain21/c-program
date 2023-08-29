#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char r;
    int v=0, c=0;
    p=fopen("D:\\filehandling\\gita.txt","r+");
    if(p==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    else
	{
    	
    while(fscanf(p,"%c",&r)!=EOF)
    {
		if(r=='.')
		{
			exit(0);
		}
		
          if((r>=65&& r<=90) || (r>=97 && r<=122))
         {
            if(r=='a' || r=='e' || r=='i' || r=='o'|| r=='u' || r=='A' || r=='E' || r=='I'|| r=='O'|| r=='U' )
            {
                v++;
            }
            else
            {
                c++;
            }
         }
    
     
    }
	}
    fprintf(p,"Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", v);
    fclose(p);
    return 0;
}
