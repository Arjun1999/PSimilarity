#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int comp(const void* i,const void* j)
{
 return *(long long int*)i - *(long long int*)j;   
}
int main(){
    long long int a[5]; 
    scanf("%lli %lli %lli %lli %lli",&a[0],&a[1],&a[2],&a[3],&a[4]);
    qsort(a,5,sizeof(long long int),comp);
    printf("%lli",a[0] + a[1] + a[2] +a[3]);
    printf(" %lli",a[1] + a[2] + a[3] + a[4]);
    return 0;
}
