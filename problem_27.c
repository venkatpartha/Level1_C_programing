//get 3 digit number from user. if sum of 3 dig,, is 10 then print "success", otherwise print "failure".
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 3 digit number :");
scanf("%d",&x);
if((x/100)+(x%100)/10+(x%10)==10)
printf("\nSuccess\n");
else
printf("\nFailure\n");
return 0;
}
