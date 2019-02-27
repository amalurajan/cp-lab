//Question 6

//Write a program to print 24 hours of a day with suitable suffixes like AM, PM , Noon and Midnight.

//Example:

//12 Midnight
//1 AM
//12 Noon
//5 PM

#include<stdio.h>
void main()
{
int time=12;
printf("%d Midnight\n",time);
for(time=1;time<12;time++)
{
	printf("%d AM\n",time);
}
printf("%d Noon\n",time);
for(time=1;time<12;time++)
{
	printf("%d PM\n",time);
}
}
