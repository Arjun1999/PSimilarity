#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
        {
    scanf("%d",&a[i]);
    
        c=c+a[i];
    }
    
    printf("%d",c);    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
