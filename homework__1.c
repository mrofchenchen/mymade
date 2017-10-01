/*teacher give us homework ,this one*/
/*it is the tell us Judgment arithmetic are correct*/
/*                       by chenchen*/
#include <stdio.h>
int main()
{	
	float a,c,d,e=0;
	char b,f;
	printf("Please give my math: ");
	scanf("%f%c%f%c%f",&a,&b,&c,&f,&d);
	switch(b)
	{
		case '+' : e=a+c;break;
		case '-' : e=a-c;break;
		case '*' : e=a*c;break;
		case '/' : e=a/c;break;
	}
	if (d==e)
	{
		printf("yes");
	}
	else if ( d != e)
	{
		printf("no");
	}
}
