#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
        { s=s+a[i];
        }
    printf("%d",s);
    return 0;
}
