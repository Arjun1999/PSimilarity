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
int arr_count=5;
    int set[5];
    int max1,max2,min1,min2,max,min;
    printf("enter the numbers");
    scanf("%d%d%d%d%d",&set);
    sum1=set[2]+set[3]+set[4]+set[5];
    sum2=set[1]+set[3]+set[4]+set[5];
    sum3=set[1]+set[2]+set[4]+set[5];
    sum4=set[1]+set[2]+set[3]+set[4];
    sum1=max1;
    if sum1>sum2
        sum1=max1;
    else
        sum2=max1;
     if sum3>sum4
        sum3=max2;
    else
        sum4=max2;
     if max1>max2;
        max1=max;
    else
        max2=max;
  if sum1<sum2
        sum1=min1;
    else
        sum2=min1;
     if sum3<sum4
        sum3=min2;
    else
        sum4=min2;
     if min1<min2;
        max1=min;
    else
        min2=min;
    printf("maximun sum=%d",max);
    printf("minimum sum=%d",min);
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
