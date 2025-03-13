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
    int n;
    cin >> n;
    int sum = 0;
    int S = (1 + n) * n / 2;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        sum += a[i];
    }
    int res = 0;
    sort(a + 1 , a + 1 + n);
    for(int i = 1; i <= n ; i ++){
        res += abs(a[i] - i);
    }
    if(sum != S){
        cout << -1 << endl;
        return;
    }
    cout << res/2 << endl;


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

