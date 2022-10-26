//Question 5

//Inverted half pyramid using *

//* * * * *
//* * * *
//* * * 
//* *
//*


#include<stdio.h>
void main()
{
int limit,i,j;

printf("enter limit of half the pyramid:");
scanf("%d",&limit);
for(i=limit;i>0;i--)
{
	for(j=i;j>0;j--)
		printf("*");
	printf("\n");
}
}
