
//Write a program to receive an integer and find its octal equivalent.

//Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn't become zero, then write the reminders obtained in reverse direction.   

//author:amalu



#include<stdio.h>
void main()
{
int no,ocnum=1,foct=0,temp;
printf("\nEnter an integer = ");
scanf("%d",&no);
while(no>=8) //loop for converting decimal to octal
{
temp=no%8;
no=no/8;
ocnum=(ocnum*10)+temp;
}
ocnum=(ocnum*10)+no; //number is in reverse
while(ocnum!=1) //loop for reversing the octal result
{
temp=ocnum%10;
ocnum=ocnum/10;
foct=(foct*10)+temp;
}
printf("\nThe octal equivalent of %d\n",foct);
}
