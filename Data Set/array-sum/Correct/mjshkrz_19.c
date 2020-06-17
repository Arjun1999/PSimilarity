#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,ans=0,i;
    scanf("%d",&n);
    int a[1000];
    for (i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
        
         }
    for (i=0;i<n;i++)
        {
        ans=ans+a[i];
    }
    printf("%d",ans);
    return 0;
}
