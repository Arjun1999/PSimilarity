#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,j,i,s=0;
    scanf("%d",&n);
    int a[n];
  
    for( j=0;j<n;j++)
        {
        scanf("%d",&a[j]);
    }
    for( i=0;i<n;i++)
        {
        s=a[i]+s;
    }
    printf("%d",s);
    return 0;
}
