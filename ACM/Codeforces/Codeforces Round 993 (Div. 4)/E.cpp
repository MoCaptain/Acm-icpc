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
    int k,l1,r1,l2,r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int res = 0;
    int n = 1;
    //x < y
    for(int i = 0 ; i <= 32; i ++){
    	if(n * l1 > r2)break;
    	int tp1 = max(l2 / n + (l2 % n > 0) , l1);
    	int tp2 = min(r2 / n , r1);
    	res += max(tp2 - tp1 + 1 , 0LL);
    	n *= k;
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

