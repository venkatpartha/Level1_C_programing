//get 2 digit number from user. if sum of 2 dig,, is equal to 10 then print "success", otherwise print "failure".
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 2 digit number :");
scanf("%d",&x);
if((x%10)+(x/10)==10)
printf("\nSuccess\n");
else
printf("\nFailure\n");
return 0;
}
