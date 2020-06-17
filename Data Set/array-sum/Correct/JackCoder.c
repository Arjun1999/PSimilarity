#include <stdio.h>


int main() {
    int arr[1000];
    int count, sum = 0;
    scanf("%d", &count);
    
    for (int i=0; i<count; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d\n",sum);
    
    return 0;
}

