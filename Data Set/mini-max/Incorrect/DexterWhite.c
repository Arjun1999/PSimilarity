#include <stdio.h>

int main(){
    
    int i,j,a[4],e[4],temp,min,max;
    
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    
    e[0]=a[1]+a[2]+a[3]+a[4];
    e[1]=a[0]+a[2]+a[3]+a[4];
    e[2]=a[0]+a[1]+a[3]+a[4];
    e[3]=a[0]+a[1]+a[2]+a[4];
    e[4]=a[0]+a[1]+a[2]+a[3];
   
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
            temp=e[j];
            e[j]=e[j+1];
            e[j+1]=temp;
        }
    }
    
    max=e[4];
    min=e[0];
    
    printf("%d %d",min,max);
    
    return 0;
}