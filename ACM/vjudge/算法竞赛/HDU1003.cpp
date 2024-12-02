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
    int t;
    cin >> t;
    for(int j = 1; j <= t; j ++){
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for(int i = 1; i <= n ; i ++){
            cin >> a[i];
        }

        int maxx = a[1];
        int l , r , idx;
        l = r = idx = 1;
        for(int i = 2; i <= n ; i ++){
            if(a[i - 1] < 0)idx = i;
            else a[i] += a[i - 1];

            if(a[i] > maxx){
                maxx = a[i];
                l = idx;
                r = i;
            }

        }
        if(j != 1)cout << endl;
        cout << "Case " << j << ":" << endl;
        cout << maxx << ' ' << l << ' ' << r << endl;
    }
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

