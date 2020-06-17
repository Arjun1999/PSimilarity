#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long int sum=0;
    int n,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
          sum=sum+a[i];
        
    }
    printf("%lld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
