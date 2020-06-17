#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef long long unsigned int bint;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    bint sum=0;
    scanf("%d",&n);
    while(n--){
        bint temp;
        scanf("%llu",&temp);
        sum+=temp;
    }
    printf("%llu",sum);
    return 0;
}
