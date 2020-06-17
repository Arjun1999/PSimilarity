#include <math.h>
#include <stdio.h>

int main(){
    int n,sum=0,i,a[6]; 
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }printf("%d",sum);
    return 0;
}
