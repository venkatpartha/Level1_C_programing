//get three digit number from user and make the one's digit as 2,then print the result
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
y=(x/10)*10+2;
printf("\nResult = %d\n",y);

return 0;
}
