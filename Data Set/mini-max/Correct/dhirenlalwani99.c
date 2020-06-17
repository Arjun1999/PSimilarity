#include<stdio.h>
int main(){
    long int i,a[5],count=0,sum=0;
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
        if(a[i]>=1&&a[i]<=1000000000)
            count++;
        sum+=a[i];
    }
    if(count==5){
        long int max,min;
        max=min=a[0];
        for(i=0;i<5;i++){
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
        printf("%ld %ld",(sum-max),(sum-min));
    }
    return 0;
}