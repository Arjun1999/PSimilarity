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
int maxarr(int arr_count, int *arr){
    int term=arr[0],j=0;
    for(int i=0;i<arr_count;i++){
        if(arr[i]>term){
            term=arr[i];
            j=i;
        }
    }
    return j;
}
int minarr(int arr_count, int *arr){
    int term=arr[0], j=0;
    for(int i=0;i<arr_count;i++){
        if(arr[i]<term){
            term=arr[i];
            j=i;
        }
    }
    return j;
}
void miniMaxSum(int arr_count, int* arr) {
    int min,max,s1=0,s2=0;
    min=minarr(arr_count,arr);
    max=maxarr(arr_count,arr);
    for(int i=0;i<arr_count;i++){
        if(i!=max){
            s1+=arr[i];
        }
    }
    printf("%d",s1);
    printf(" ");
    for(int i=0;i<arr_count;i++){
         if(i!=min){
            s2+=arr[i];
        }
    }
    printf("%d",s2);
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
    int arr_count;
    int count(int* arr){
        int i=0;
        while(arr[0]!=NULL){
            i++;
        }
        return i;
    }
    arr_count=count(arr);
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
