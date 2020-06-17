#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,x,sum=0;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&x);
        sum+=x;
    }printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
