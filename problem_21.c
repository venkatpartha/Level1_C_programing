//get number from user and sub "5" from that num if num is odd, then print result (don't use if case)
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
y=((x%2)==1)?(x-5):x;
printf("\nResult = %d\n",y);
return 0;
}
