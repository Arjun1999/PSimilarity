#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int a[1000]={0};
int main() {
long int n,i,x;   
    scanf("%ld",&n);
    x=0;
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
         x=x+a[i];
        
    }printf("%ld\n",x);
    
    return 0;
}
