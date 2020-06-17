#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],n,i,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a[n]);
        sum+=a[n];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
