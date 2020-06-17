#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i, sum=0;
   scanf("%d",&n);   
    if(n>1000){
    exit(1);
    }
    int a[n];
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);    
    sum= sum+ a[i];
    }
    printf("%d",sum);
    return 0;
}
