#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    int maxs=0;
    int mins=0;

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        maxs += arr[i]);
    }
    maxs -=max(arr[0],arr[1],arr[2],arr[3],arr[4]);
    for(int i=0;i<5;i++){
        mins += arr[i]);
    }
    mins -=min(arr[0],arr[1],arr[2],arr[3],arr[4]);
    return 0;
}