#include<stdio.h>
int main()
{
    int i,arr[4],sum=0,summ[4],max,min;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }


    for(i=0;i<5;i++)
    {
        summ[i]=sum-arr[i];


    }

  max = summ[0];
    min = summ[0];

    /*
     * Find maximum and minimum in all array elements.
     */
    for(i=0; i<5; i++)
    {
        /* If current element is greater than max */
        if(summ[i] > max)
        {
            max = summ[i];
        }

        /* If current ment is smaller than min */
        if(summ[i] < min)
        {
            min = summ[i];
        }
    }

    /* Print maximum and minimum element */
    printf("%d\t%d", min,max);
    


 return 0;
}

