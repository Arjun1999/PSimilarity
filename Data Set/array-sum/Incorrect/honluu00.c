#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumArray(int* values, int count)
{
    int sum = 0;
    for (int i=0; i<count; i++)
    {
        sum += values[i];
    }
    return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int count = 0;
    char str[512] = "";
    int* values;
    char* token = NULL;

    scanf("%d\n", &count);

    fgets(str, sizeof(str), stdin);

    values = (int*)malloc(count*sizeof(int));
    token = strtok(str, " ");
    values[0] = strtol(token, NULL, 10);
    for (int i=1; i<count; i++)
    {
        token = strtok(NULL, " ");
        values[i] = strtol(token, NULL, 10);
    }

    printf("%d\n", sumArray(values, count));

    return 0;
}
