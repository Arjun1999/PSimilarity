#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,i,s,f;s=0;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",&f),s+=f,i++);
    printf("%d",s);
    return 0;
}
