#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

arrSum(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
        temp += arr[i];
    return temp;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[1000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", arrSum(arr, n));
    return 0;
}
