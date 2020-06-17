#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   scanf("%d",&n);
   long long int a[n],s=0;
    for(i=0;i<n;i++)
    {scanf("%lld",&a[i]);s+=a[i];}
    printf("%lld",s);
    
    return 0;
}
