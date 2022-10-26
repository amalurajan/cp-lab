//armstrong num


#include<stdio.h>
#include<math.h>
void main()
{
int num,rem,sum=0,armnum;
printf("enter number to reversed:");
scanf("%d",&num);
armnum=num;
while(num>0)
{
	rem=num%10;
	num=num/10;
	sum+=(rem*rem*rem);
}
if(armnum==sum)
	printf("the given number %d is armstrong number",armnum);
else
	printf("the given number %d is not an armstrong number",armnum);
}
