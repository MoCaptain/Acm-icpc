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

void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    int v = 0;
    bool vis = false;
    for(int i = 0 ; i < n ; i ++){
        if(vis){
            vis = false;
            v += 10;
        }
        if(s[i] == '0'){
            v += 10;
        }else if(s[i] == '1'){
            v -= 5;
            v = max(v , 0ll);
        }else{
            vis = true;
            v -= 10;
        }
        res += max(0ll , v);
    }
    cout << res << endl;
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int T;
    T = 1;
    //std::cin >> T;
    while(T--)solve();
    return 0;
}

