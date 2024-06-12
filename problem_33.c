//get two 2 digit number from user. print the sum of digit's of the biggest number
#include<stdio.h>
int main()
{
int x1,x2,y;
printf("Enter 2 digit x1 number :");
scanf("%d",&x1);
printf("Enter 2 digit x2 number :");
scanf("%d",&x2);
if((x1/10+x1%10)>(x2%10+x2/10))
{
y=x1/10+x1%10;
printf("\nResult : %d\n",y);
}
else
{
y=x2/10+x2%10;
printf("\nResult : %d\n",y);
}
return 0;
}
