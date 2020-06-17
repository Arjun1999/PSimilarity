#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
           int n;
    int sum=0;
    int i;
     scanf("%d",&n);
    int *array;
    array=(int*)malloc(sizeof(int)*n);
    for( i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
        sum=sum+array[i];
       printf("%d",sum);
    return 0;
}
