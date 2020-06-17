#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000],temp=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
         temp=temp+arr[i];
    }
    printf("%d",temp);
    return 0;
}
