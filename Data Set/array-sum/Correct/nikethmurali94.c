#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n--){
        int x;
        scanf("%d",&x);
        sum=sum + x;
    }
    printf("%d",sum);
    return 0;
}
