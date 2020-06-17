#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int *p,int N)
{
    int *ptr,sum=0,n;
    ptr=p;
    n=N;
    for(int i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
        
    }
    
    return sum;
    
}



int main() {
    int N,A[1000];
    //printf("Enter the size of an array\n");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        //printf("Enter the value of the element\n");
        scanf("%d",&A[i]);
        
    }
    int s=sum(&A[0],N);
    printf("%d",s);
    
    return 0;
}
