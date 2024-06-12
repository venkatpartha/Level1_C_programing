//get three digit number from user and make the ten's digit as 0,then print the result
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
int temp;
temp=(x/100)*100;
x=x%10;
y=temp+x;
printf("\nResult = %d\n",y);

return 0;
}
