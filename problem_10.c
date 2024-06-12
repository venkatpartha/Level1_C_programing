//get two digit number from user and print the reverse of the num
#include<stdio.h>
int main()
{
int x,y;
printf("Enter three digit number :");
scanf("%d",&x);
y=(x%10)*10;
x=x/10;
y=x+y;
printf("\nResult = %d\n",y);
return 0;
}
