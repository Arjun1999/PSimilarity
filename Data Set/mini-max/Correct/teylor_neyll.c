#include <stdio.h>

int main(void)
{
    void sorting (unsigned int array[], size_t size);
    
    size_t i;
    unsigned int n = 5;
    unsigned int array[n];
    
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%u", &array[i]);
    }
    
    sorting(array, n);
    
    return 0;
}

void sorting (unsigned int array[], size_t size)
{
    void sumMinMax (unsigned int array[], size_t size);
    
    size_t x, j;
    unsigned int hold;
    
    for (x = 1; x <= size; x++)
    {
        for (j = 0; j <= size - 2; j++)
        {
            if (array[j] > array[j + 1])
            {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
    
    sumMinMax(array, size);
    
    return;
}

void sumMinMax (unsigned int array[], size_t size)
{
    size_t i;
    unsigned int sumMin = 0, sumMax = 0;
    
    for (i = 0; i <= size - 2; i++)
    {
        sumMin += array[i];
    }
    
    for (i = 1; i <= size - 1; i++)
    {
        sumMax += array[i];
    }
    
    printf("%u %u", sumMin, sumMax);
    
    return;
}