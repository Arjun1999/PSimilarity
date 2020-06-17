#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    unsigned long long int sum =0,a[n];
    for(int i=0;i<n;i++){
     scanf("%llu",&a[i]);   
      sum = sum+a[i];  
    }
    printf("%llu",sum);
    return 0;
}