/*teacher give us the second homework*/
/*Record student data and judge*/
/*                          by chenchen */
#include <stdio.h>
int main()
{
	int pnum,num1;
	int num=0;
	int maxnum=0;
	int minnum=100;
	int sum=0;
	int losts=0;
	int nulls=1;
	while(nulls==1)
	{
	        printf("give me num");
	        scanf("%d",&num1);
		if((num1<0)||(num1>100)) break;

		if(num1>maxnum)maxnum=num1;//maxnum 
		if(num1<minnum)minnum=num1;//minmax
		num+=1;//how many people
		sum+=num1;//how many number
		if(num1<60)losts+=1;//how many lostnum---bujige
	}
	pnum=sum/num;
	printf("how many student %d\n",num);
        printf("how many student falied  %d\n",losts);
        printf("max number is  %d\n",maxnum);
        printf("min  numberis  %d\n",minnum);
        printf("pijunfen numberis  %d\n",pnum);
}
