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
#include <unordered_map>

using namespace std;

#define int long long
#define endl "\n"
const int N = 5e5 + 10;
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin >> n >> m;

    if(m == 1){
        cout << 1 << endl;
        return;
    }

    if(n < m){
        cout << 1 << endl;
        return;
    }else{
        int tmp = m;
        int res = 1;
        while(tmp < n){
            tmp *= m;
            res++;
        }
        int tp1 = tmp - n;
        int tp2 = n - tmp / m;
        if(tp1 < tp2){
            cout << res << endl;
        }else{
            cout << res - 1 << endl;
        }

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

