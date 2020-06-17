#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,i,n,sum=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        
     scanf("%d",&a);/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    sum+=a;
    }
    printf("%d",sum);
    return 0;
}
