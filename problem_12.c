//get three digit number from user and print sum the digit
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
int temp1,temp2;
temp1=x/100;
temp2=x%10;
x=(x%100)/10;
y=temp1+temp2+x;
printf("\nResult = %d\n",y);
return 0;
}
