#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
    int i;
 
    // Iterate through all elements and add them to sum
    for (i = 0; i < n; i++)
       sum +=  arr[i];
 
    return sum;
}
 
int main()
{
    int arr[50];
    int n, i;
    
    scanf("%d", &n);
   
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
 
    printf("%d",sum(arr, n));
    return 0;
}