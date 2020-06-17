#include <stdio.h>
#include <conio.h>

int main ()
{
    int arr[6] = {1,4,53,4,3,4};
    int i, sum = 0, counter = 0;
    for (i=0;i<6;i++){
         sum += arr[i];
         counter++;
    }
    printf ("%i\n", counter);
    printf ("%i", sum);
    

    getch();
    return 0;
}
