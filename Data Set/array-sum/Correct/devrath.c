#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calsum(int sum[],int n){
    int a=0;
    int i;
    for(i=0;i<n;i++){
        a+=sum[i];
    }
    return a;
}
int main() {
    int *array;
    int sum;
    int i;
    int n;
    scanf("%d",&n);
    array=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    sum=calsum(array,n);
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
