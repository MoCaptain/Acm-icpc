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
    int m,a,b,c;
    cin >> m >> a >> b >> c;
    int res = 0;
    int temp1 = min(a , m);
    int temp2 = min(b , m);
    int temp3 = 0;
    if(temp1 != m){
    	temp3 = min(c , (m - a));
    	res += temp3;
    	c -= temp3;
    }
    if(temp2 != m){
    	temp3 = min(c , (m - b));
    	res += temp3;
    	c -= temp3;
    }
    res += temp1;
    res += temp2;
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

