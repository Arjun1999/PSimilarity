#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s=0;
    scanf("%d", &n);int a[n];
    for(i=0;i<n;i++){
        
        scanf("%d", &a[i]);
            s+=a[i];
    }
    printf("%d\n", s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
