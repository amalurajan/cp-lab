

#include<stdio.h>
void main()
{
int num,rev=0,rem;
printf("enter number to be reversed:");
scanf("%d",&num);
while(num>0)
{
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
}
printf("reversed number is %d",rev);
}
