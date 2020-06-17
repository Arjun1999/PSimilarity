
#include <stdio.h>
 
int main()
{
 
int a[6]={1,2,3,4,10,11};  // Here N is 6;
int sum=0,i,n;
 
for(i=0;i<5;i++)
{
    n=n-1;
sum = sum + a[i];
}
 
printf("Sum of elements in an array is %d\n", sum);
 
return 0;
 
}