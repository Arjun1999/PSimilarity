#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,sum=0;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
