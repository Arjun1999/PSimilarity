#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size,i;
    long int sum=0;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%ld",sum);
    return 0;
}
