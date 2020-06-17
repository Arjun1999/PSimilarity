#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100
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
    int arr[MAX_SIZE];
    int n, i;
    printf("Eneter the number of elements in array\n");
    scanf("%d", &n);
    printf("Enter Elements \n");
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
     printf("Sum of the elements is %d", sum(arr, n));
    return 0;
}