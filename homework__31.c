/*teacher homework give us*/
/*Calculates the number of small letters in an array */
/*                             by chenchen */
#include <stdio.h>
#include <string.h>

void fun(char a[],int b[])
{
	int i,j,sl;
	sl=strlen(a);
	for(i=0;i<sl;i++)
	{
		for(j=97;j<122;j++)
		{
		
			if(a[i]==j)
				b[j-97]++;
		}
	}
	
}

main()
{
	int b[26]={0};
	int i;
	char a[100];
	printf("give me string :");
	scanf("%s",&a);
	fun(a,b);
	for(i=97;i<122;i++)
	{
		printf("%d %c \n",b[i-97],i);
	}
	printf("\n");
}
