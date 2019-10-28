//In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2-3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3-4 hours, then the worker is ordered to improve speed. If the time taken is between 4-5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 5 hours, then the worker is terminated. If the time taken by the worker is input through the key board, write a program to find the efficiency of the worker.


#include<stdio.h>
void main()
{
float t;
printf("enter time taken to complete work:");
scanf("%f",&t);
if(t>2&&t<3)
	printf("worker is highly efficient");
if(t>3&&t<4)
	printf("worker needs to improve speed");
if(t>4&&t<5)
	printf("worker must be given training to improve speed");
if(t>5)
	printf("worker needs to be terminated");
}
