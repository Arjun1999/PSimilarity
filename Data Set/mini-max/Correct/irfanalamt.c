#include <stdlib.h>
#include <stdio.h>



int main() {
    int i,j;long long sum[5],big,small;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(i=0;i<5;++i)
        sum[i]=0;
    
    for(i=0;i<5;++i)
    {for(j=0;j<5;++j)
    {    if(j!=i)
        sum[i]+=arr[j];
        
    }}
    small=big=sum[0];
       for(i=0;i<5;++i) 
       {
           if(sum[i]>big)
               big=sum[i];
           if(sum[i]<small)
               small=sum[i];
           
       }
    printf("%lli %lli",small,big);
    
    return 0;
}
