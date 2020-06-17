#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void get_array_from_stdin(int lenght_of_array, int* pointer_to_allocated_space);
void print_array(int lenght_of_array, int* pointer_to_allocated_space);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i=0,n,*array;
    
    scanf("%d", &n);
    array = malloc(n * sizeof(*array));
    
    get_array_from_stdin(n, array);
    
   /* print_array(n, array);*/
    
    int sum = 0;
    i = 0;
    for(i;i<n;i++){
        sum = sum + array[i];
    }
    
    printf("%d", sum);
    return 0;
}

void get_array_from_stdin(int n, int*array){
    int i = 0;
    for(i; i<n; i++){
        scanf("%d", &array[i]);
    }
}
