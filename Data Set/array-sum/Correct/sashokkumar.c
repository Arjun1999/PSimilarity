#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,n,sum=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        sum+=t;
    }
    printf("%d",sum);
    return 0;
}
