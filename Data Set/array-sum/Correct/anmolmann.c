#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,a[1000],sub,sum=0;
    scanf("%d",&n);
    for(sub=0;sub<n;sub++)
        {
          scanf("%d",&a[sub]);
          sum=sum+a[sub];
    }
    printf("%d",sum);
    return 0;
}
