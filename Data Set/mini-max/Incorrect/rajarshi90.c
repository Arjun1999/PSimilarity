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
void combine(int low, int mid, int high, int *arr) {
  int i, j = 0, k = 0,n1=0,n2=0, LArr[5], RArr[5];
  n1=mid-low+1;
  n2=high-mid;
  for (i = 0; i < n1; i++) {
    LArr[i] = *(arr +low+ i);
  }
  LArr[n1] = 999999;
  for (i = 0; i <n2; i++) {
    RArr[i] = *(arr + i +mid+1);
  }
  RArr[n2] = 999999;
  for (i = low; i <= high; i++) {
    if (LArr[j] <= RArr[k]) {
      *(arr + i) = LArr[j];
      j++;
    } else {
      *(arr + i) = RArr[k];
      k++;
    }
  }
}
void mergeSort(int low, int high, int *arr) {
  int mid=0;
  if (low < high) {
    mid = (low + high) / 2;
    mergeSort(low, mid, arr);
    mergeSort(mid + 1, high, arr);
    combine(low, mid, high, arr);
  }
}
// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    mergeSort(0,(arr_count-1),arr);
    int i=0,sum_max=0,sum_min=0;
    for(i=0;i<(arr_count-1);i++){
        sum_min+=*(arr+i);
        sum_max+=*(arr+i+1);
        //printf("%d",*(arr+i));
    }
    printf("%d %d",sum_min,sum_max);

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
