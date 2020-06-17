#include<stdio.h>

main(){
    int a[5],sum[5],j=0,min,i, max;
    sum[0]=0;
     for(i=0;i<5;i++){
    scanf("%d",&a[i]);
         
     }
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j!=i){
                sum[i]+=a[j];
            }
        }
    }
     for(i=0;i<5;i++){
         j=i;
         max=sum[0];
    if(sum[i+1]>max)
        max=sum[i];
    if(sum[j]<max)
       min=sum[j] ;
     }
    printf("%d %d",min,max);
    
}