#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a[10],i,sum=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("%d",sum);
    return 0;
}
