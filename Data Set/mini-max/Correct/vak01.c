#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int a_max=-1,a_min=1e9+1,s_=0;
    for(int i=0;i<5;i++){
       cin>>a;
       s_+=a;
       a_max=max(a_max,a);
       a_min=min(a_min,a);
    }
    printf("%li %li",s_-a_max,s_-a_min);
    return 0;
}
