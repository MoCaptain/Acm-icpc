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
#include <fstream>

using namespace std;

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(1, 50);
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if(a + b + c < n){
        cout << "No" << endl;
        return;
    }
    if(a + b + c > 2 * n){
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;

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

