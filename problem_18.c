//get two digit number from user and make the ten's digit as 1,then print the result
#include<stdio.h>
int main()
{
int x,y;
printf("Enter two digit number :");
scanf("%d",&x);
y=(x%10)+10;
printf("\nResult = %d\n",y);

return 0;
}
