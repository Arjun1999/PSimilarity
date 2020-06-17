#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,m,ans=0;
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
    {
        m=a[j];
        ans=ans+m;
    }
    printf("%d",ans);/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
