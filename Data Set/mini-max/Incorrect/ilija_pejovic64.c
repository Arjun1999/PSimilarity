#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5]={7 ,69, 2 ,221, 8974},i,mini=0,maxi=0,sum=0;
    mini=maxi=a[0];
    for(i=0;i<5;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
        if(a[i]<mini){
            mini=a[i];
        }
    }
    for(i=0;i<5;i++){
        sum+=a[i];
    }
    printf("%d\t",sum-maxi);
    printf("%d\t",sum-mini);
}
 