#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long long int hasil[5];
    hasil[0] = arr[0] + arr[1] + arr[2] + arr[3];
    hasil[1] = arr[0] + arr[1] + arr[2] + arr[4];
    hasil[2] = arr[0] + arr[1] + arr[3] + arr[4];
    hasil[3] = arr[0] + arr[2] + arr[3] + arr[4];
    hasil[4] = arr[1] + arr[2] + arr[3] + arr[4];
  
    int c;
    long long int minimal = hasil[0];
    long long int maksimal = hasil[0];
    for (c=0;c<5;c++){
        if(hasil[c]<minimal){
            minimal = hasil[c];
        }
        if(hasil[c]>maksimal){
            maksimal = hasil[c];
        }
    }
    printf("%llu %llu",minimal,maksimal);
    /*
    hasil -> long long int[5]
    hasil[0] <- arr[0] + arr[1] + arr[2] + arr[3];
    hasil[1] <- arr[0] + arr[1] + arr[2] + arr[4];
    hasil[2] <- arr[0] + arr[1] + arr[3] + arr[4];
    hasil[3] <- arr[0] + arr[2] + arr[3] + arr[4];
    hasil[4] <- arr[1] + arr[2] + arr[3] + arr[4];
    
    c -> int
    
    min <- hasil[0] -> long long int //asumsi nilai min ada di index ke 0
    max <- hasil[0] -> long long int //asumsi nilai max ada di index ke 0
    
    for c=0 selama c<5 , c++
        jika hasil[c] < min
           min <- hasil[c]
        end if
        jika hasil[c] > max
           max <- hasil[c]
        end if
    end
    
    cetak min<spasi><spasi>max
    */
    return 0;
}
