#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,size,i,*array;
    scanf("%d",&size);
    array=(int *)malloc(sizeof(int)*10);
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    for(i=0;i<size;i++)
        sum+=array[i];
    printf("%d",sum);
    return 0;
}
