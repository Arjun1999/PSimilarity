#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int n,i,sum=0;
    int a[999];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
