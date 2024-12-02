#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <bitset>
#include <random>  
#include <chrono>

using namespace std;

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
map<int,int> mp;
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    int temp = n % 4;
    if(temp == 0){
        cout << n << endl;
    }else if(temp == 1){
        cout << 0 << endl;
    }else if(temp == 3){
        cout << 1 << endl;
    }else{
        int cnt = n / 4;
        cnt++;
        cout << cnt * 3 + (cnt - 1) << endl;
    }
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int T;
    T = 1;
    int res = 0;
    std::cin >> T;
    while(T--)solve();
    return 0;
}

