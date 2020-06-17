#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[1000],i=0,a;
    long long sum=0;
    scanf("%d",&a);
    while(i<a){
        scanf("%d",&arr[i]);
        i++;}
    i=0;
    while(i<a){
        sum=sum+arr[i];
            i++;
    }
    printf("%lld",sum);
    return 0;
}
