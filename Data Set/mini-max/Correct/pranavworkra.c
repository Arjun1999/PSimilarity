#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void insertionSort(long int arr[])
{
   long int key;
    int i,j;
   for (i = 1; i < 5; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main(){
    long int a[5]; 
   for(int i=0;i<5;i++)
    scanf("%ld",&a[i]);
    insertionSort(a);
    printf("%ld %ld",(a[0]+a[1]+a[2]+a[3]),(a[1]+a[2]+a[3]+a[4]));
    
    
    return 0;
}
