#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,sum=0,in;
int arr[1000];
    scanf("%d",&in);
    for(i=0;i<in;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<in;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
