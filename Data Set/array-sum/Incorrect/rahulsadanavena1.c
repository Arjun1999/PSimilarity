#include <stdio.h>

void main()
{
    int array[1000],n;
    int index;
    int sum;
  
scanf("%d",&n);

    for (index = 0; index <= n; index++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &array[index]);
    }

    sum  = sumArr(array, 1000);

    printf("%d", sum);




int sumArr(int arr[1000])
{
    int i;
    int sum = 0;

    for (i = 0; i < 4; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
}
