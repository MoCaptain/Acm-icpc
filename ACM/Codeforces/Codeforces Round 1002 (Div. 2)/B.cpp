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
int a[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }
    bool vis = false;
    if(n == k){
        int i = 2;
        for(; i <= n ; i += 2){
            if(a[i] != i / 2){
                vis = true;
                break;
            }
        }
        if(!vis){
            cout << (i - 2) / 2 + 1 << endl;
        }else{
            cout << i / 2 << endl;
        }


    }else{
        for(int i = 2; i <= n - k + 2 ; i ++){
            if(a[i] != 1){
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
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

