//get three digit number from user and print the one's digit
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
y=x%10;
printf("\nResult = %d\n",y);
return 0;
}
