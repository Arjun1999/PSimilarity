#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    int i, j;
     int arr1[100];
        arr=arr1
   int min ;
    for(j = 0; j< arr_count; j++)
    {
    
        for (i = j; i< arr_count; i++)
        {
        if
        (arr[i]< arr1[i+1])
        {
        break;}
        if 
           ( arr[i]>arr[i+1])
           {
            min = arr[i+1];
            arr[i+1] = arr[i];
            arr[i]= min;
            break ;       }
}
    }
  float sum_min = 0; 
 for(i = 0; i< 4; i++)
 {
     
     sum_min = sum_min + arr[i];
    
 }
int max  ;
for(j = 0; j< arr_count; j++)
  
    {
        for (i = j; i< arr_count; i++)
        {
        if(
        arr1[i]< arr1[i+1])
        {
        break;}
        if 
            (arr1[i]>arr1[i+1])
            {
            max = arr1[i+1];
            arr1[i+1] = arr[i];
            arr1[i]= max;
            break ;       }
        }
    }
float sum_max = 0;
 for(i = arr_count; i> (arr_count-4); i--)
 {
     sum_max = sum_max + arr[i];
    
 }
printf("%f", sum_min);
printf(" " );
printf("%f", sum_max);

}

int main()
{
    char** arr_temp = split_string(readline());

    int* arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = 5;

    miniMaxSum(arr_count, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
