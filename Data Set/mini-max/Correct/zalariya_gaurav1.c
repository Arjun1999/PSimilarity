#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    quicksort(a,0,4);
    
    printf("%lld %lld",(a[0]+a[1]+a[2]+a[3]),(a[1]+a[2]+a[3]+a[4]));

    return 0;
}
void quicksort(long int array[], int firstIndex, int lastIndex)
{
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;

        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;

        quicksort(array, firstIndex, index2-1);
        quicksort(array, index2+1, lastIndex);
    }
}
