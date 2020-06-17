

#include <stdio.h>

int main() {
    int max=0,min=0,sum=0,a[40];
    
    for(int i = 1;i <=5;i++)
    {
       scanf("%d",&a[i]);
        
    }
    for(int i =1;i <= 5;i++)
    {
        for(int j =1;i!=j,j <= 5;j++)
        {
     sum=sum+a[j];
        }   
       /* if(max<sum)
            max=sum;
        if(min>sum)
            min=sum; 
        
    }     
    printf("%d  %d",sum,sum);
    
    return 0;
}
