#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[7]={1,2,3,4,10,11},i=6,sum=0;
    for(i=0;i<6;i++)
        {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
