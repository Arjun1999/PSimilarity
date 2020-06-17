#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    int a[1000];
    scanf("%d",&n);
    if(n<=1000)
    {
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    }
    return 0;
}
