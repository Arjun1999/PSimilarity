#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
        s+=a[i];}
    
    printf("%d",s);
}
