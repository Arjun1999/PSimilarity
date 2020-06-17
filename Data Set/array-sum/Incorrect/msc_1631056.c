#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
 * Complete the simpleArraySum function below.
 */
int sum(int arr[], int n) 
{ 
    int sum = 0; // initialize sum 
  
    // Iterate through all elements  
    // and add them to sum 
    for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  
    return sum; 
} 

int main()
{
   int arr[] = {1,2,3,4,10,11};
   int n;
    scanf("%d",&n); 
    printf("%d", sum(arr, n)); 
    return 0;
}
