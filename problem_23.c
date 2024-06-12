//get 2 digit number from user and sub "5" from that num sum of digit is odd, then print result (don't use if case)
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 2 digit number :");
scanf("%d",&x);
int temp=(x%10)+(x/10);
y=((temp%2)==1)?(x-5):x;
printf("\nResult = %d\n",y);
return 0;
}
