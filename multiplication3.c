//Write a program to print the multiplication table of the number entered by the user. the table should get displayed in the following form. 

//29 * 1 = 29

//29 * 2 = 58
//...

#include<stdio.h>
void main()
{
int num,n=1,pro;
printf("\nEnter an integer = ");
scanf("%d",&num);
printf("multiplication table of %d =\n",num);
for(n=1;n<=num;n++)
{
pro=num*n;
printf("%d*%d=%d\n",num,n,pro);
}
}



