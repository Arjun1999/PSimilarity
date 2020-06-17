#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,tot=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            tot+=arr[i];
    }
    printf("%d",tot);
    
    
    return 0;
}
