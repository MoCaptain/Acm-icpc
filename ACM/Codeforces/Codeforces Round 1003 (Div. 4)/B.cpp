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
bool vis[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    string s;
    cin >> s;
    int n = s.size();
    int res1,res2;
    res1 = res2 = n;
    for(int i = 0 ; i < n - 1; i ++){
        if(s[i] == s[i + 1]){
            res1 = i + 1;
            break;
        }
    }

    for(int i = n - 1; i >= 1 ; i --){
        if(s[i] == s[i - 1]){
            res2 = n - i;
        }
    }


    if(res1 != n || res2 != n){
        cout << 1 <<endl;
    }else{
        cout << n <<endl;
    }


}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int T;
    T = 1;
    std::cin >> T;
    while(T--)solve();
    return 0;
}

