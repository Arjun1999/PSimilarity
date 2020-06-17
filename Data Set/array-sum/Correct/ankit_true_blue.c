#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int res=0,i,x,arr[1000];
    scanf("%d",&x);
    for(i=0;i<x;i++)
        {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
        {
        res=res+arr[i];
    }
    printf("%d",res);
    
    return 0;
}
