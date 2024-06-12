//get two 3 digit number from user. print the difference between the one's and 100's digit's of the number whose 10's digit is bigger than the other number's 10's digit
#include<stdio.h>
int main()
{
int x1,x2,y;
printf("Enter 3 digit x1 number :");
scanf("%d",&x1);
printf("Enter 3 digit x2 number :");
scanf("%d",&x2);
if((x1%100)/10>(x2%100)/10)
{
y=x1/100-x1%10;
if(y<0){
y=y*(-1);
}
printf("\nResult : %d\n",y);
}
else
{
y=x2/100-x2%10;
if(y<0){
y=y*(-1);
}
printf("\nResult : %d\n",y);
}
return 0;
}
