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
int t=12;
printf("%d Midnight\n",t);
for(t=1;t<12;t++)
{
	printf("%d AM\n",t);
}
printf("%d Noon\n",t);
for(t=1;t<12;t++)
{
	printf("%d PM\n",t);
}
}
