#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 static int n,sum,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        scanf("%d",&l);\
        sum=sum+l;    
    }
    printf("%d",sum);
           /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
