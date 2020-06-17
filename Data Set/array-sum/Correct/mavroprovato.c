// https://www.hackerrank.com/challenges/a-very-big-sum
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Read the size of the array
    int array_size = 0;
    int rc = fscanf(stdin, "%d", &array_size);
    if (rc != 1) {
        printf("Invalid input\n");
        exit(1);
    }

    // Read the array elements
    int sum = 0;
    for (int i = 0; i < array_size; i++) {
        int a = 0;
        int rc = fscanf(stdin, "%d", &a);
        if (rc != 1) {
            printf("Invalid input\n");
            exit(1);
        }
        sum += a;
    }
    // Print the sum
    printf("%d\n", sum);

    return 0;
}
