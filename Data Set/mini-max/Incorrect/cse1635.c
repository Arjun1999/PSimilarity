#include<stdio.h>
 
int main()
{
    int a[5],n,i,j,temp,sum=0,min=0,max=0;
    scanf("%d",&n);
    
    for(i=0;i<n;++i)
    {
    
        scanf("%ld",&a[i]);
       sum=sum+a[i];
    }

    for(i=1;i<n;++i){
    
        for(j=0;j<(n-i);++j){
        
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
       max=sum-a[0];
min=sum-a[4];     
    
        printf("l%d %ld",min,max);
 
    return 0;
}
    
    