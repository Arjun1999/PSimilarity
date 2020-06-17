#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n=0;
    int x;
    int sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("%d",sum);
    return 0;
}
