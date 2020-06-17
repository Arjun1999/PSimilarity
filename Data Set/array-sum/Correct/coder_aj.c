#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int i,j=0,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
        
    }
    
    for(i=0;i<n;i++)
      j+=ar[i];
    
    printf("%d",j);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
