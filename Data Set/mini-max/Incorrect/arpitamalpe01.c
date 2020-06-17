#include<stdio.h>
int main(){
    long int n,a[]={1,2,3,4,5},k=0,l=0;
    n=sizeof(a)/sizeof(a[0]);
    printf("%d\n",n);
    for(int i=0;i<n;i++){
         k=a[i]+k;
        
    }
    for(int j=0;j<n;j++){
         l=a[j]+l;
        
    }
    printf("%ld %ld",k,l);
}