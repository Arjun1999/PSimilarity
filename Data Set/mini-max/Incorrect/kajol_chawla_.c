#include<stdio.h>
int main(){
     int a[50],max,min,sum=0;
    int i,n;
    scanf("%d",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%d %d",sum-max,sum-min);
    return 0;
}
