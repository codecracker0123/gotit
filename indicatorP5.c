#include<stdio.h>
int sum();
void main()
{
	int result;
	result =sum();
	printf("result=%d",result);
}
int sum()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	return a+b;
}
