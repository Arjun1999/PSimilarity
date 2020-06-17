
#include <stdio.h>
#define MAX_SIZE 1000
 

int sum(int arr[], int n)
{
    int sum = 0; 
    int i;
 
    for (i = 0; i < n; i++)
       sum +=  arr[i];
 
    return sum;
}
 
int main()
{
    int arr[MAX_SIZE];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
 
    printf("%d", sum(arr, n));
    return 0;
}
