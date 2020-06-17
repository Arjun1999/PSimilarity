#include <math.h>
#include <stdio.h>
#include <string.h>



int simpleArraySum(int arr[],int n) {
    int sum=0;
     for(i=0;i<n;i++)
     {
         sum=sum+arr[i];
         }
         return sum;
     
  

}

int main()
{
   int i,arr[100],n;
   scanf("%d\n",&n);
   for(int i=0;i<n;i++)
 {
     scanf("%d ",&arr[i]);
 }
   int ttal=simpleArraysum(arr[],n);
   printf("%d",ttal);
 }
