//get a two digit number from user and print the one's digit
#include<stdio.h>
int main()
{
int x,y;
printf("Enter two digit number :");
scanf("%d",&x);
y=x%10;
printf("\nResult = %d\n",y);
return 0;
}
