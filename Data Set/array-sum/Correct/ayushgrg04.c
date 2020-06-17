#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,i;
    scanf("%d", &num);
    int *arr=(int*)malloc(sizeof(num));
    for(i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }
    long sum=0;
    for(i=0;i<num;i++){
        sum+=arr[i];
    }
    printf("%ld", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
