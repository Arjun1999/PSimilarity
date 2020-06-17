#include<stdio.h>
main(){
    int a[5],i,max=0,min=0,n=5,sum=0,c,d;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            max=a[i];
        }
        else if (a[i]<a[i+1])
            max=a[i+1];
    }
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            min=a[i+1];
        }
        else if (a[i]<a[i+1])
            min=a[i];
    }
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    c=sum-max;
    d=sum-min;
    
    printf("%d\t%d",c,d);
}