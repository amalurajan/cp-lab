//to check palindrome


#include<stdio.h>

void main()
{
int num,rem,rev=0,number;
printf("enter number to be    reversed:");
scanf("%d",&num);
number=num;
while(num>0)
{
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
}
if(number==rev)
	printf("the given number %d is palindrome number",number);
else
	printf("the given number %d is not a palindrome number",number);
}
