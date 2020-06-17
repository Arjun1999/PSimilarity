#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    scanf("%d",&num);
    int sum=0,i,arr[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
