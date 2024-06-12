//get number from user and sub "5" from that num if ten's position of num is odd, then print result (don't use if case)
#include<stdio.h>
int main()
{
int x,y;
printf("Enter number :");
scanf("%d",&x);
int temp=(x%100)/10;
y=((temp%2)==1)?(x-5):x;
printf("\nResult = %d\n",y);
return 0;
}
