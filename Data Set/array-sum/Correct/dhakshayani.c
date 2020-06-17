#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int a[1200],n,s=0;
    scanf("%lli",&n);
    if(1<=n&&n<=1000)
    {
        for(int i=0;i<n;i++)
    {
        scanf("%lli",&a[i]);
       if(0<=a[i]&&a[i]<=1000)
             s=s+a[i];

    }
    printf("%lli",s);
    }
    return 0;
}
