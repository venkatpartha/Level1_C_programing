//get 3 digit number from user. if sum of 1's dig,, &100's dig is less then 10, then print "success", otherwise print "failure".
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 3 digit number :");
scanf("%d",&x);
if((x%10)+(x/100)<10)
printf("\nSuccess\n");
else
printf("\nFailure\n");
return 0;
}
