//get two number from user and print sum the digit
#include<stdio.h>
int main()
{
int x,y;
printf("Enter two digit number :");
scanf("%d",&x);
int temp;
temp=x%10;
x=x/10;
y=temp+x;
printf("\nResult = %d\n",y);
return 0;
}
