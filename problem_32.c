//get two 2 digit number from user. if sum of two number is less then 100,then print the sum, otherwise print the difference.
#include<stdio.h>
int main()
{
int x1,x2,y;
printf("Enter 2 digit x1 number :");
scanf("%d",&x1);
printf("Enter 2 digit x2 number :");
scanf("%d",&x2);
if(x1+x2<100)
{
y=x1+x2;
printf("\nResult : %d\n",y);
}
else
{
y=x2-x1;
if(y<0){
y=y*(-1);
}
printf("\nResult : %d\n",y);
}
return 0;
}
