#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int max(long int a,long int b)
    {
    if(a<b)
        return b;
    else
        return a;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
int main(){
    long int a[5];
   for(int i=0;i<5;i++)
    scanf("%lld",&a[i]);
     bubbleSort(a,5);
    printf("%d %d",a[0]+a[1]+a[2]+a[3],a[4]+a[1]+a[2]+a[3]);
    
    return 0;
}
