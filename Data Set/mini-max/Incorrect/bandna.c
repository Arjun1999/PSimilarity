#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],sum,max,min;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        max=a[0];
        min=a[0];
        sum=0;
        sum+=a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d %d",(sum-max),(sum-min));
    return 0;
}
