//Write a program to print out all Armstrong numbers between 100 to 500.

//author:amalu
//date:6/3/19



#include<stdio.h>

void main()
{
int num,rem,sum,temp;



for(num=100;num<=500;num++)
	{
	temp=num;
	sum=0;
	while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		sum+=(rem*rem*rem);
	}
	if(num==sum)
		printf("%d\n",num);
	}

}
