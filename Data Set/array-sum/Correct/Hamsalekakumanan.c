
#include <stdio.h>
#define MAX_SIZE 1000
 
// C program to return sum of elements in an array of size n
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
   // printf("Eneter the number of elements in array\n");
    scanf("%d", &n);
    //printf("Enter Elements \n");
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
 
    printf("%d", sum(arr, n));
    return 0;
}