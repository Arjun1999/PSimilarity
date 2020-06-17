#include <stdio.h>

#include <math.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[10],n,sum=0,i;
    scanf("%d\n", &n);
    
    for(i=0;i<=n ;i++){
    scanf("%d", &a[i]);
        sum+=a[i];
        
    }
    printf("%d\n", sum);
    return 0;
}
