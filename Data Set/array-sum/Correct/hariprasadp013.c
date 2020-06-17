#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,c=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("%d",c);
    return 0;
}
