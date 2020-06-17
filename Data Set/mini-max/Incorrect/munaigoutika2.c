#include<stdio.h>
#include<math.h>
int main(){
    int a[100];
    int n,i,j,temp,sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
                temp=a[i];
            a[i]=a[j];
            a[j]= temp;
        }
    }
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j])
                temp=a[i];
            a[i]=a[j];
            a[j]= temp;
        }
    }
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum1=sum1+a[i];
    }
    printf("%d %d",sum,sum1);
    return 0;
}