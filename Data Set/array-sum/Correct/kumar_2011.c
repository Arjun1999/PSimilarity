#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int i=0,a=0,s=0;
    while(i<n){
        scanf("%d",&a);
        s=s+a;
        i++;
    }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
