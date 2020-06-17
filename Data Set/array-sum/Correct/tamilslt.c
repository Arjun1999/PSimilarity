#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=1000,a[n],c=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        c+=a[i];
    }
        printf("%d",c);
               
        
    
    
       
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
