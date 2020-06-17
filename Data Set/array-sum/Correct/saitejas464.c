#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int sum=0;
    int n,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%ld",sum);
    return 0;
}
