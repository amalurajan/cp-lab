//Write a programme to determine the youngest of the three.

#include<stdio.h>
void main()
{
int age_sam,age_shyam,age_ajay,young;
printf("enter age of ram:");
scanf("%d",&age_sam);
printf("enter age of shyam:");
scanf("%d",&age_shyam);
printf("enter age of ajay:");
scanf("%d",&age_ajay);

young=age_sam;
if(young<age_shyam&&age_sam<age_ajay)
	printf("sam is youngest:");
{
if(age_shyam<age_sam&&age_shyam<age_ajay)
	printf("shyam is youngest");
}
if(age_ajay<age_sam&&age_ajay<age_shyam)
	printf("ajay is youngest");
}

