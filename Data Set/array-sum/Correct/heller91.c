#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[1000], size = 0, i, sum=0;
    scanf("%d",&size);
            for (i = 0; i < size; i++)
            {
                scanf("%d",&arr[i]);
                sum += arr[i];
            }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
