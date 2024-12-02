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
const int N = 5e5 + 10;
const int mod = 1e9 + 7;
int a[N];
int fr[N];
int bc[N];
void solve(){
    int n,k;
    cin >> n >> k;
    fr[0] = 0;
    fr[n + 1] = 0;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        fr[i] = a[i];
        bc[i] = a[i];
    }
    if(k >= n - 2){
        sort(a + 1, a + 1 + n);
        cout << a[n] + a[n - 1] << endl;
        return;
    }

    for(int i = 1; i <= n ; i ++){
        fr[i] = max(fr[i],fr[i - 1]);
    }

    for(int i = n; i >= 1 ; i --){
        bc[i] = max(bc[i],bc[i + 1]);
    }

    int maxx = 0;

    for(int i = 0 ; i <= k; i ++){
        int temp = k - i;
        maxx = max(maxx , fr[i + 1] + bc[n - temp]);
    }

    cout << maxx << endl;
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

