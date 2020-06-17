#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int arr[5];
    for(int i = 0; i < 5; i++){
       cin >> arr[i];
    }
    
    long long int max=arr[0];
    long long int min=arr[0];
    long long int sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
        sum=sum+arr[i];
    }
    
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
