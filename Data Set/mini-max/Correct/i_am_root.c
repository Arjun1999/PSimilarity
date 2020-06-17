#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    vector<ll> arr(5);
    for(ll arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    ll max=0,min=0;
    for(ll i=0;i<5;i++)
    {
        if(i!=0)
            max+=arr[i];
        if(i!=4)
            min+=arr[i];
    }
    cout<<min<<" "<<max;
    
    return 0;
}
