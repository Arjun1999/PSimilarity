#include<stdio.h>
int main()
{
    int A[5],i,max,min,N,minsum,maxsum,j;
    scanf("%d ",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d ",&A[i]);
    }
    max=0;
    min=0;
    for(i=0;i<N;i++)
    {
            for(j=0;j<N;j++)
            {
                if(A[i]<A[j])
                {
                    min=A[i];    
                }
                else
                {
                    min=A[j];
                }
            }
    }
        for(i=0;i<N;i++)
    {
            for(j=0;j<N;j++)
            {
                if(A[i]>A[j])
                {
                    max=A[i];    
                }
                else
                {
                    max=A[j];
                }
            }
    }
    minsum=0;
    for(i=0;i<N;i++)
    {
        minsum=minsum+A[i];
    }
    minsum=minsum-max;
    maxsum=0;
    for(i=0;i<N;i++)
    {
        maxsum=maxsum+A[i];
    }
    maxsum=maxsum-min;
    printf("%d \n %d ",maxsum,minsum);
    return 0;
}