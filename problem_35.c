//get two 3 digit number from user. add the one's and 100's digit's of the number. print the sum of all digits of the num,, whose sum of 1's and 100's digit is bigger than the other number.
#include<stdio.h>
int main()
{
int x1,x2,y;
printf("Enter 3 digit x1 number :");
scanf("%d",&x1);
printf("Enter 3 digit x2 number :");
scanf("%d",&x2);
if((x1/100+x1%10)>(x2/100+x2%10))
{
y=x1/100+(x1%100)/10+x1%10;
printf("\nResult : %d\n",y);
}
else
{
y=x2/100+(x2%100)/10+x2%10;
printf("\nResult : %d\n",y);
}
return 0;
}
