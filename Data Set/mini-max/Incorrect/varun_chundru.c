#include<stdio.h>
int main(){
    long long int max;min;sum=0,a[5];
     int i;
     max=a[0];
    min=a[0];
    sum +=a[0];
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
        if(a[i]>max)
            max = a[i];
        if(a[i]<min) 
            min = a[i];
        sum = sum + a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
