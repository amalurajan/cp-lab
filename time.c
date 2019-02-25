//In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2-3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3-4 hours, then the worker is ordered to improve speed. If the time taken is between 4-5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 5 hours, then the worker is terminated. If the time taken by the worker is input through the key board, write a program to find the efficiency of the worker.


#include<stdio.h>
void main()
{
int n;
float time;
printf("enter time taken to complete work:");
scanf("%f",&time);
printf("enter choice:\n 1)2to3 hrs\n2)3to 4 hrs\n3)4to5hrs\n4)greater than 5hrs\nenter1/2/3/4:");
scanf("%d",&n);


switch(n)
{
case1:
	printf("worker is highly efficient");
	break;
case2:
	printf("worker needs to improve speed");
	break;
case3:
	printf("worker must be given training to improve speed");
	break;
default:
	printf("worker needs to be terminated");
}
}
