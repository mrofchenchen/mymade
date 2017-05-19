/*teacher give us the second homework*/
/*get date and anaysiy */
/*                          by chenchen */
#include<stdio.h>
#define N 15  
int fun(int *a)
{
	int count = 0;
	int i;
	int j;
	int same = 0;       
	for(i=0;i<N;i++)   
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				a[j] = 0;    
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i] == 0)
			same++;      
	}
	return N-same;       
}
int main()
{
	int a[N];
	int i=0;
	printf("please give me number£º");
	for (i=0;i<N;i++)
	{
		scanf("%d",a+i);
		if(*(a+i)<=0)
		{
			printf("error, please give me again  \n");
			i--;
		}
	}
	printf("all date is:\n");
	for (i=0;i<N;i++)
	{
			printf("%d ",a[i]);
	}

	printf("\nso,the real date is:%d\n", fun(a));
	printf("the result is£º\n");
	for(i=0;i<N;i++)
	{
		if(a[i]!=0)
			printf("%d ",a[i]);
	}
}

