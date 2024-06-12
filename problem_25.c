//get 4 digit number from user and sub "5" from that num if ten's digit and 100's digit are same, then print result (don't use if case)
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 4 digit number :");
scanf("%d",&x);
y=((x/100)%10==(x%100)/10)?(x-5):x;
printf("\nResult = %d\n",y);
return 0;
}
