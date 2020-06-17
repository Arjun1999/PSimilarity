#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int array[5],sum =0,min=0,max=0; 
    int loop_cnt1 =0,loop_cnt2 =0;
    for(loop_cnt1 =0;loop_cnt1<5;loop_cnt1++)
    {
        array[loop_cnt1] = 0;
        scanf("%ld ",&array[loop_cnt1]);
    }
    for (loop_cnt1 =0;loop_cnt1<5;loop_cnt1++)
    {
        sum =0;
        for (loop_cnt2 =4;loop_cnt2>=0;loop_cnt2--)
        {
            
            if(loop_cnt2 == loop_cnt1)
                {
                continue;
            }
           // printf("1.. %ld \n",array[loop_cnt2]);
            sum += array[loop_cnt2];
           // printf("2.. %ld \n",sum);
        }
      //  printf("3.. %ld \n",sum);
        if (loop_cnt1 == 0)
        {
            min = sum;
            max = sum;
        }
        if (sum > max)
        {
            max = sum;
        }
        if (sum < min)
        {
            min = sum;
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
