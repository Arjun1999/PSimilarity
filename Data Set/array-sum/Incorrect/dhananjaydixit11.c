#include<stdio.h>
main()
{
                int size,i,arr[50],sum=0;
                printf("");
                scanf("%d",&size);
                printf("\n");
                for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
                for(i=0;i<size;i++)
                {
                    sum=sum+arr[i];
                }
                printf("\n%d",sum);
}