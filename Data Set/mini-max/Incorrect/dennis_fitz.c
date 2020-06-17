#include <stdio.h>
#include <stdlib.h>


// Complete the miniMaxSum function below.
main(int arr_count, char **arr) {

int zahl;
int summe;

for(zahl = 0 ; zahl < arr_count ; zahl++)
    {
        summe = summe + ctoi(arr[zahl]);
    }



printf("%i",summe);

}
