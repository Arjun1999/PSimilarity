#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sumofelements(int n)
    {
    
    long long int i,array[n],sum=0;
     for(i=0;i<n;i++)
        {   
        scanf("%lld",&array[i]);
    }
    for(i=0;i<n;i++)
        {   
        sum=sum+array[i];
    }
    return sum;
    
}

int main() {
    
    
    int n,sum;
    
    

    scanf("%d\n",&n);
    
    sum=sumofelements(n);
    
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
