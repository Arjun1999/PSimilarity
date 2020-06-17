#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n],i,y=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        
        y = y + a[i];
    }
    printf("%d",y);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
