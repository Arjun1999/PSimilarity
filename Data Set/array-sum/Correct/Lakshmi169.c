
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[2000];
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        count=count+arr[i];
    }
    printf("%d",count);
    return 0;
}

