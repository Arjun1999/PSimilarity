#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int sum = 0,i,k,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&k);
        sum = sum + k;
    }
    printf("%d",sum);
    return 0;
}
