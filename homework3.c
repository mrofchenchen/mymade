/*teacher homework give us*/
/*Calculates the number of small letters in an array */
/*                             by chenchen */
#include <stdio.h>
int main()
{
	char str[100],i;
	int j,k,a,b;
	printf("give me string \n");
	scanf("%s",&str[100]);
	int fun(char str[100]);
	a=fun(i);
	b=fun(k);
	printf("%c have %d number",a,b);
}
int fun(char str[100])
{
	char i;
        int j,k;
;
	for(i='a';i<'z';i++)
        {
                k=0;
                for(j=0;str[j]!='\0';j++)
                {
                         if (i==str[j])k+=1;
                }
        
        	return(i,k);
	}
}
