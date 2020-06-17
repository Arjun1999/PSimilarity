#include<stdio.h>

int main()
    {
    
    int n,k,i;
    long int sum=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        
        
        scanf("%d",&k);
        sum+=k;
    }
    printf("%d",sum);
    
    
    return 0;
}