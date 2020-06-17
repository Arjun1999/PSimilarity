#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i=0;
    int ans=0;
    int a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        ans=ans+a[i];
    }
    printf("%d",ans);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
