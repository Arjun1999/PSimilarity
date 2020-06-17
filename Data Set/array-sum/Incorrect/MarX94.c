#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    cin >> n;
    int ans = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        int a, cin >> a;
        ans += a;
    }
    cout << ans << endl;
    return 0;
}
