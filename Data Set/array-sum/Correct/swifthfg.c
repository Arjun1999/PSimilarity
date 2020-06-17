#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,res=0,n,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        res += c;
    }
    printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
