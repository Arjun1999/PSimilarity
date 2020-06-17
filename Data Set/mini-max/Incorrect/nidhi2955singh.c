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

int main()
{
    long long int a,b,c,d,e;
    long long int max=0,min=0,sum_min=0,sum_max=0;
    long long int arr[5];
    int i;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    max=a;
    min=a;
    for(i=1;i<5;i++)

    {
        if(min>arr[i])
        {
        min=arr[i];
        min=i;
        }
        if(max<arr[i])
        {
        max=arr[i];
        max=i;
        }
    }
    for(i=0;i<5;i++)
    {
        if(i!=min)
        sum_max+=arr[i];
        if(i!=max)
        sum_min+=arr[i];
    }
    printf("%lld %lld",sum_min,sum_max);
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
