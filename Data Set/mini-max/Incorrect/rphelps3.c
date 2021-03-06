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
void miniMaxSum(int* arr) {
    long long int sum1, sum2, sum3, sum4, sum5, swap;
    sum1 = arr[1]+arr[2]+arr[3]+arr[4];
    sum2 = arr[2]+arr[3]+arr[4]+arr[5];
    sum3 = arr[1]+arr[3]+arr[4]+arr[5];
    sum4 = arr[1]+arr[2]+arr[4]+arr[5];
    sum5 = arr[1]+arr[2]+arr[3]+arr[5];
    
    long long int sum_arr[5] = {sum1, sum2, sum3, sum4, sum5};
    
    // Implementing bubble-sort to find min and max
    for (int c = 0 ; c < 4; c++){
        for (int d = 0 ; d < 5 - c - 1; d++){
            if (sum_arr[d] > sum_arr[d+1]){
                swap       = sum_arr[d];
                sum_arr[d]   = sum_arr[d+1];
                sum_arr[d+1] = swap;
            }
        }
    }
    printf("%lli %lli\n", sum_arr[1], sum_arr[4]);
}

int main()
{
    char** arr_temp = split_string(readline());

    int arr[5];

    for (int arr_itr = 0; arr_itr < 5; arr_itr++) {
        char* arr_item_endptr;
        char* arr_item_str = arr_temp[arr_itr];
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        arr[arr_itr] = arr_item;
    }

    miniMaxSum(arr);

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
