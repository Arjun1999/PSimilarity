#include <stdio.h>
#define swap(type,a,b){type tmp=a;a=b;b=tmp;}
int main(){
    unsigned int a[10];
    for (int i=1;i<=5;i++) scanf("%u ",&a[i]);
    for (int i=1;i<=5;i++)
        for (int j=1;j<5;j++)
        if (a[j]>a[j+1]) swap(unsigned int,a[j],a[j+1]);
    printf("%u %u",a[1]+a[2]+a[3]+a[4],a[2]+a[3]+a[4]+a[5]);
    return 0;
}
