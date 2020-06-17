#include<stdio.h>
int main()
{
    int arr[1000],arr_size;
    scanf("%d", &arr_size);
    
int max = arr[0];
int min = arr[0];
int total = 0;
for (int i = 0; i < arr_size; i++) {
  if (arr[i] > max)
    max = arr[i];
  if (arr[i] < min)
    min = arr[i];
  total += arr[i];
}
printf("%d %d", total - max, total - min);
return 0;
}