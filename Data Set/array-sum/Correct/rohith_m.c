#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,j=0,s=0;
    scanf("%d",&n);
    int a[n];
    while(n!=j){
        scanf("%d",&a[j]);
        s+=a[j];
        j++;
    }
    printf("%d",s);
    return 0;
}
