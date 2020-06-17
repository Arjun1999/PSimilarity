#include <bits/stdc++.h>
using namespace std; 
int main() {
vector <int> a(5);
for (int i=0; i<=4; i++) cin>>a[i];
sort(a.begin(),a.end());
int sum=0;
int su=0;
for (int i=0; i<=3; i++) sum+=a[i];
for (int i=1; i<=4; i++) su+=a[i];
cout<<sum<<' '<<su;
return 0;
}