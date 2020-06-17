#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a[],int n){
    int i,su=0;
    for(i=0;i<n;i++){
        su+=a[i];
    }
    return su;
}

int main() {

    int arr[1001],i,size,s=0;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    s=sum(arr,size);
    printf("%d",s);
    return 0;
}
