#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int r,i,result=0;
    scanf("%d",&r);
    int arr[r];
    for(i=0;i<r;i++)
        {
        scanf("%d",&arr[i]);
        result=result+arr[i];
    }
    printf("%d",result);
    return 0;
}
