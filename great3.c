#include<stdio.h>
void main()
	{
	int num1,num2,num3;
	printf("enter integers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
		{
		printf("%d is greater",num1);
		if(num2>num3)
		printf("%d is greater",num2);
		}
	else
	printf("%d is greater",num3);
	}

