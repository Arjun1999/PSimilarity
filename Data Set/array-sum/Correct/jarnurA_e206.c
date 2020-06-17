#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,lop,n;
    scanf("%d",&n);
    int a[n];
    for(lop=0;lop<n;lop++)
        {
        scanf("%d",&a[lop]);
        sum=sum+a[lop];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
