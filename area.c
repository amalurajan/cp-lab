// write a program to find whether the area of the rectangle is greater than its perimeter 

#include<stdio.h>
void main()
{
int len,breadth,area,perimeter;
printf("enter length:");
scanf("%d",&len);
printf("enter breadth:");
scanf("%d",&breadth);

area=len*breadth;
perimeter=2*(len+breadth);
printf("area is %d,\n",area);
printf("perimeter is %d,\n",perimeter);

if(area>perimeter)
	printf("rectangle of length %d and breadth %d has area greater than its perimeter",len,breadth);
else
	printf("rectangle of length %d and breadth %d has area less than its perimeter",len,breadth);
}

