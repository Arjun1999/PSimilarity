#include<stdio.h>
int main(){
    int i,j,sum=0,res1=0,res2=0,a[100],total=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      total=total+a[i];
    }
    for(i=0;i<5;i++){
        sum=total-a[i];
        res1=sum;
        if(sum<res1){
            res1=sum;
        }
        if(sum>res2){
          res2=sum;
        }
    }
        printf("%d %d",res1,res2);
}
