
#include <stdio.h>
           
int main() {                                   
   long long  int sum[5]={0},min=9999999999,max=-1,a[5];
    int i,j;
    for(i=1;i<=5;i++)
    scanf("%lli",&a[i]);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i!=j)
                sum[i-1]+=a[j];
        }
    }
    for(i=0;i<5;i++)
    {
        if(min>sum[i])
            min=sum[i];
        if(max<sum[i])
            max=sum[i];
    }
    printf("%lli %lli",min,max);
    
}
    