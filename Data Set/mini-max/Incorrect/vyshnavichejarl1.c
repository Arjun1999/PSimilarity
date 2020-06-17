#include<stdio.h>
int main(){
        int i,min=0,max=0,n,sum=0;
        scanf("%d",&n);
        int a[5];
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
                if(a[i]<min){
                        min=a[i];
                }
                if(a[i]>max){
                        max=a[i];
                }
                sum+=a[i];
                printf("%d %d",min-sum,max-sum);
        }
        return 0;
        
        
}