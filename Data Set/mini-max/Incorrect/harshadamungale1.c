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
return 0;

}

int main()
{
    int i,arr[5]={1,2,3,4,5},temp,k,smallest,sum1=0,sum2=0;
    /*for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        
    }*/
for(i=0;i<5;i++)
{
    smallest=i;
    for(k=i+1;k<5;k++)
    {
        if(arr[smallest]>arr[k])
        smallest=k;
    }
}
    if(i!=smallest)
    {
        temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=arr[i];
    }
    for(i=0;i<=3;i++)
    {
        sum1=sum1+arr[i];
    }
    for(i=1;i<=4;i++)
    {
        sum2=sum2+arr[i];
    }
    printf("%d %d",sum1,sum2);
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
