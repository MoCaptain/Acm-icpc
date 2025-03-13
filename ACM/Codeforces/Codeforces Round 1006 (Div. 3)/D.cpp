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
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }

    int l = n,r = n, tmp = 0;
    for(int i = n ; i >= 1; i --){
        int maxx = 0 ,minn = 0, temp = 0;
        for(int j = i + 1; j <= n; j ++){
            if(a[j] > a[i])maxx++;
            else if(a[j] < a[i])minn++;

            temp = minn - maxx;
            if(temp > tmp){
                l = i,r = j;
                tmp = temp;
            }
        }
    }
    cout << l << ' ' << r << endl;
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

