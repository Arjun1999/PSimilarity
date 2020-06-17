#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the miniMaxSum function below.
 */
void miniMaxSum(int arr_count, int* arr) {
    int i,j,x=0;
    for(i=0 ; i<arr_count ; i++)
    {
        for(j=1 ; j<arr_count ;j++)
        {
            x+=arr[i+j];
        }
    }

}
