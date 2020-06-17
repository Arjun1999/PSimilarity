#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int*a,int n){if(n==1)return a[n-1];
                    return(a[n-1]+sum(a,n-1));}


int main() {
    int n;
scanf("%d\n",&n);
    int i,a[1000];
        for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    
    i=sum(a,n);
    printf("%d",i);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
