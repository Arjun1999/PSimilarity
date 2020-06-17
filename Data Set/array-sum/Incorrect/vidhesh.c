#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[10],i,n,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nThe sum is = %d\n",sum);    
    return 0;
}
