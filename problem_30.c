//get 4 digit number from user. if sum of 10's dig,, & 100's dig,, is equal to 10 and one of the digit is more than 7, then print "success", otherwise print "failure".
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 4 digit number :");
scanf("%d",&x);
if((x%100)/10+(x/100)%10==10 && (x%100)/10>7 || (x/100)%10>7 )
printf("\nSuccess\n");
else
printf("\nFailure\n");
return 0;
}
