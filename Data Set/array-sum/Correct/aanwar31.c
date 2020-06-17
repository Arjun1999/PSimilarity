#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000],t,i,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    
    return 0;
}
