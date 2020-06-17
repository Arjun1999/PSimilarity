#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a,s,b;
    scanf("%d",&n);
    a = 0;
    s=0;
    while(a<n){
        scanf("%d",&b);
        s=s+b;
        a=a+1;
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
