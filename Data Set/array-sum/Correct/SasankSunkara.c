#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,i;
    scanf("%d",&t);
    int a[t],sum=0;
    for(i=0;i<t;i++){
        scanf("%d ",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
