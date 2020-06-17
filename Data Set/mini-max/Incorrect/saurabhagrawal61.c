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


}
long int *min(long int a[5])
{
    int i=1;
    long int *min;
    min=a;
    while (i<5)
    {
        if(*(a+i) < *min)
        min=a+i;
        i++;
    }
    return (min);
}
long int *max(long int a[5])
{
    int i=1;
    long int *max;
    max=a;
    while (i<5)
    {
        if(*(a+i) > *max)
        max=a+i;
        i++;
    }
    return (max);
}
int main()
{
     long int a[5];
    scanf("%ld%ld%ld%ld%ld",&a,&a+1,&a+2,&a+3,&a+4);
    
    long int *min = get_min(a);
    long int *max = get_max(a);
    long int sum_min = *min;
    long int sum_max = *max;
    int i;
    while (i<5)
    {
        
        if(a+i != min)
        sum_max += *(a+i);
        if(a+i != max)
        sum_min += *(a+i);
        i++;
    }
    printf("%ld%ld",sum_min,sum_max);


    
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
