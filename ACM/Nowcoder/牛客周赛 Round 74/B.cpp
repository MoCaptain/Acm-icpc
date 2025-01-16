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
    int n,m,k;
    cin >> n >> m >> k;
    int maxx = max(n,m);
    int minn = min(n,m);
    if(k < maxx){
    	cout << -1 << endl;
    	return;
    }
    vector< vector<int> > vec(n + 1 , vector<int> (m + 1));
    for(int i = 1; i <= minn; i ++){
    	vec[i][i] = 1;
    	k--;
    }

    if(n > m){
    	for(int i = m + 1; i < n ; i ++){
    		vec[i][m] = 1;
    		k--;
    	}
    	vec[n][m] = k;
    }else if(n < m){
    	for(int i = n + 1; i < m ; i ++){
    		vec[n][i] = 1;
    		k--;
    	}
    	vec[n][m] = k;
    }
    
    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= m ; j ++){
    		cout << vec[i][j] << ' ';
    	}
    	cout << endl;
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

