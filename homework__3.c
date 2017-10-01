/*teacher homework give us*/
/*Calculates the number of small letters in an array */
/*                             by chenchen */
#include <stdio.h>
int main()
{
	char str[100],i;
	int j,k,a,b;
	k=0;
	printf("give me string \n");
	scanf("%s",&str[100]);
	for(i='a';i<'z';i++)
        {
               
                for(j=0;str[j]!='\0';j++)
                {
                         if (str[j]==i) k += 1;
                }
		
			printf("%c %d\n",i,k);
        		k=0;
	}

}

