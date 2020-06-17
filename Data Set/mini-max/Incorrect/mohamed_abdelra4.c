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
    int ar[arr_count],k,l;
    for(int j=1;j<arr_count;j++){
        ar[0]+=arr[j];
    }
    int j=0;
    for(int i=1;i<(arr_count-1);i++){
        for(int j=0;j<arr_count;j++){
            if(j==i)
                continue;
            ar[i]+=arr[j];
        }
    }
    j=0;
     for(int j=0;j<(arr_count-1);j++){
        ar[(arr_count-1)]+=arr[j];
    }
	for(k=0;k<(arr_count-1);k++)
	{
		for(l=0;l<(arr_count-k-1);l++)
		{
			if(ar[l]>ar[l+1])
			{
				int temp=ar[l];
				ar[l]=ar[l+1];
				ar[l+1]=temp;
			}
		}
	}
    printf("%d\t",ar[0]);
    printf("%d",ar[(arr_count-1)]);
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

    miniMaxSum(5, arr);

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
