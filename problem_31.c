//get 3 digit number from user. if sum digits is less then 10 , then print the sum, otherwise add the digits of sum, then print sum.(the result should be single digit only)
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 3 digit number :");
scanf("%d",&x);
y=(x/100)+(x%100)/10+(x%10);
while(y>=10)
{
y=(y/10)+(y%10);
}
printf("\nResult : %d\n",y);
return 0;
}
