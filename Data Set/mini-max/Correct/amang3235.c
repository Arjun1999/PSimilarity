#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    int maxsum=0,minsum=0;
    
    return 0;
}
int main(){
    long long int t[5];
    int i;
    long long int max;
    long long int min = 0;
    long long int sum = 0;
    long long int maxsum;
    long long int minsum;
    
    scanf("%lld %lld %lld %lld %lld",&t[1],&t[2],&t[3],&t[4],&t[5]);
    max = t[1];
    min = t[1];
    i = 1;
    while (i < 5) {
        ++i;
        if (t[i] > max) {max = t[i];}
        if (min > t[i]) {min = t[i];}
    };
    sum = t[1] + t[2] + t[3] + t[4] + t[5];
    printf("%lld %lld", sum-max, sum-min);
    return 0;
}*/
int main(){
    long long int t[5];
    int i;
    long long int max;
    long long int min = 0;
    long long int sum = 0;
    long long int maxsum;
    long long int minsum;
    
    scanf("%lld %lld %lld %lld %lld",&t[1],&t[2],&t[3],&t[4],&t[5]);
    max = t[1];
    min = t[1];
    i = 1;
    while (i < 5) {
        ++i;
        if (t[i] > max) {max = t[i];}
        if (min > t[i]) {min = t[i];}
    };
    sum = t[1] + t[2] + t[3] + t[4] + t[5];
    printf("%lld %lld", sum-max, sum-min);
    return 0;
}
