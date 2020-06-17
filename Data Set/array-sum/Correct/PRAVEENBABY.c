#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int a[1001],int n)
{int i;long long int sum=0;
for(i=0;i<n;i++)
    sum+=a[i];
    printf("%llu",sum);
}
int main() {
int i,a[1001],n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   scanf(" %d",&n);
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
        fun(a,n);
    return 0;
}
