#include<stdio.h>
int main(){
    long int a[5],i,max,maxv=0,temp,minv=0;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    max=a[0];
    for(i=0;i<5;i++){
        if(max<a[i]){
            a[i]=max;
        }
    }
    for(i=0;i<4;i++){
        minv+=a[i];
        
    }
    for(i=5;i>=2;i++){
        maxv+=a[i];
    }
    printf("%ld",minv);
    printf("%ld",maxv);
    return 0;
}