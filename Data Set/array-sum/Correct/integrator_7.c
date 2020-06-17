#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int main()
{
        int *arr,n,i,sum=0;
        scanf("%d",&n);
        arr=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
         {
            scanf("%d",(arr+i));
            sum+=*(arr+i);
        }
        printf("%d",sum);
        return 0;
        
}
