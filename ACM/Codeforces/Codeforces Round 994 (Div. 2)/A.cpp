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
    int n;
    cin >> n;
    vector<int> a(n + 10);
    for(int i = 1; i <= n ; i ++){
    	cin >> a[i];
    	if(a[i] != 0)a[i] = 1;
    }
    
    int cnt = 0;
    a[0] = a[n + 1] = 0;
    bool vis = false;
    for(int i = 1; i <= n + 1; i ++){
    	if(a[i] == 1 && vis == false){
    		vis = true;
    	}
    	if(a[i] == 0 && vis == true){
    		vis = false;
    		cnt++;
    	}
    }

    if(cnt == 0){
    	cout << 0 << endl;
    	return;
    }
    if(cnt == 1){
    	cout << 1 << endl;
    	return;
    }
    if(cnt >= 2){
    	cout << 2 << endl;
    	return;
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

