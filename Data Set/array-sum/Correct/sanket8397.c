#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,s = 0;
    scanf("%d",&t);
    int a[t];
    for(i =0 ; i < t; i++){
        scanf("%d",&a[i]);
    
    }
    for(i =0 ; i < t; i++){
        s = s + a[i];
    }
    printf("%d",s);   
    return 0;
}
