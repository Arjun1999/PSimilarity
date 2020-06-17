#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int s=0;
    int a=0,i,n=0; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        s+=a;
    }
    printf("%ld",s);
    return 0;
}
