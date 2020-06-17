#include <stdio.h>

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) 
{
    int i,min=0,max=0,j,k=0,p=0,sum=0,temp;
    for(i=0;i<arr_count;i++)
    {
        for(j=0;j<arr_count;j++)
            {
                if(k==i)
                {
                  p++;
                }
                else
                {
                    sum=sum+arr[j];
                }
            
                if(p=1)
                {
                    temp=sum;
                }
            
             }
          k=p;
         
        if(sum>max)
        {
            max=sum;
        }
        if(i=0)
        {
            max=temp;
        }
        
        if(sum<=min)
        {
            min=sum;
        }
    }
    
    printf("%d %d",min,max);
}

int main()
{
    int i,a[4];
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    
    miniMaxSum(4,a);
    return 0;
}