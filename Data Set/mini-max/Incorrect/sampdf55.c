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
long checkmin(int* array);
long checkmax(int* array);

long checkmin(int* array)
{
    int i=0,j=1;
    int catch1;
    
    catch1=array[0];
    
    for(j=1;j<5;j++)
    {
    
        if(catch1 > array[i])
         {
            catch1=array[i];
            
         }
        
    }
    
    return catch1;
    
}
long checkmax(int* array)
{
    
    int i=0,j;
    int catch2;
    catch2=array[0];
    
    for(i=1;i<5;i++)
    {
        
        
        if(catch2 < array[i])
            catch2=array[i];
        
            
    }
        
        return catch2;
        
    }
        
        
            
        
            
        
        
    
    

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    long c,d;
    int i,j;
    long n,m;
    
    long sumadd=0;
  c =  checkmin( arr);
  d =  checkmax( arr);
    for(j=0;j<5;j++)
    {
        sumadd=sumadd+arr[j];
        
    }
        
    n=sumadd-d;
    m=sumadd-c;
    printf(" %ld %ld ",n,m);
    
    
    

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
