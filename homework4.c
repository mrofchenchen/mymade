/*teacher give us some homework */
/*date promeblm */
/*      by   chenchen  */
#include <stdio.h>
#define N 15
int main()
{
	int i,k[15],a[15];
	int fun(int b[]);
	for (i=0;i<15;i++)
	{
		printf("please give me number: ");
		scanf("%d",&a[i]);
		if(a[i]<=0||a[i]=='\0')i--;
		printf("%d",a[i]);
	}
	k[15]=fun(a[15]);
	for(i=0;k[i]!='\0';i++)
	{
	
		printf("there are %d number",k[i]);
	}
}
int fun(int a[N])
{
	int i,j,k;
	int b[15];
	for(i=0;i<15;i++)
	{
		for(j=15;j>0;j--)
		{
			if(a[i]!=a[j])
			{
				k+=1;
				b[i]=a[i];
			}
		}
	}
	return (b[15]);
}

 
