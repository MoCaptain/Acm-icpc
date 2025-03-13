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
int a[N],b[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n,l,r;
    cin >> n >> l >>r;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a + 1, a + r + 1);
    sort(b + l, b + n + 1);
    int sum1 , sum2;
    sum1 = sum2 = 0;

    for(int i = 1; i <= r - l + 1 ; i ++){
        sum1 += a[i];
    }
    for(int i = l ; i <= r; i ++){
        sum2 += b[i];
    }
    cout << min(sum1 , sum2) <<endl;

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

