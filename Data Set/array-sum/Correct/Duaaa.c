#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    int s=0;
    for(int i = 0; i<n; i++)
        {
        scanf("%d",&a[i]);
        s = s+a[i];
    }
     printf("%d",s);
        
    
    
    return 0;
}
