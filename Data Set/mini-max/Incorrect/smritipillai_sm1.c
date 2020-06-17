#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0;
    for(int i =0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[j]>a[i]){
            sum1 = sum1+a[j];
            }
        }
    }
    for(int i=1;i<5;i++){
        for(int j=i+1;i<5;i++){
            if(a[j]>a[j+1]){
            sum2=sum2+a[j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}