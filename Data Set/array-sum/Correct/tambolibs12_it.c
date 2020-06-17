#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,a[1000],sum = 0,n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        scanf("%d",&n);
            for(i =0 ;i<n;i++){
            scanf("%d",&a[i]);
            sum = sum +a[i];
           }
    printf("%d",sum);
    return 0;
}
