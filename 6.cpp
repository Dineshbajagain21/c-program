#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char r;
    int v=0, c=0;
    p=fopen("D:\\filehandling\\gita.txt","r");
    if(p==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    while(fscanf(p,"%c",&r)!=EOF)
    {
		if(r=='.')
		{
			exit(0);
		}
     	if(r=='a'||r=='A'||r=='e'||r=='E'||r=='i'||r=='I'||r=='o'||r=='O'||r=='U'||r=='u')
      		{
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    fclose(p);
    return 0;
}
