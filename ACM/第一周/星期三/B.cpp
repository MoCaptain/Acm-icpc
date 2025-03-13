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

#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
int a[N];
void solve(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        a[i] = abs(a[i]);
        res += a[i];
    }

    cout << res << endl;

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

