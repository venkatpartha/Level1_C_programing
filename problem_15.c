//get four digit number from user and only reverse first two digit and print the result
#include<stdio.h>
int main()
{
int x,y;
printf("Enter four digit number :");
scanf("%d",&x);
int temp1,temp2,rev;
temp1=(x/100)*100;
temp2=x%100;
rev=(temp2%10)*10;
x=temp2/10;
y=rev+temp1+x;
printf("\nResult = %d\n",y);

return 0;
}
