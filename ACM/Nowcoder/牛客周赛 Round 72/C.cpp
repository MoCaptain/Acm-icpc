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
    int a,b,k;
    // 		0 	1
    cin >> a >> b >> k;
    if(k == 0 && a != 0 && b != 0){
    	cout << -1 << endl;
    	return;
    }

    int sum = a + b;
    string res = "";
    string ans = "";
    int cnt = -1;
    if(a >= b){
    	for(int i = 1; i <= sum; i ++){
    		if(i & 1){
    			res += '0';
    			a--;
    		}else{
    			res += '1';
    			b--;
    		}
    		cnt++;
    		if(cnt == k)break;
    	}

    	if(a < 0 || b < 0){
    		cout << -1 << endl;
    		return;
    	}


    	for(int i = 1; i <= a; i ++)ans += '0';

    	bool vis = false;

    	for(int i = 0 ; res[i] ; i ++){
    		ans += res[i];
    		if(vis == false && res[i] == '1'){
    			vis = true;
    			for(int j = 1; j <= b; j ++)ans += '1';
    		}
   		}
    }else{
    	for(int i = 1; i <= sum; i ++){
    		if(i & 1){
    			res += '1';
    			b--;
    		}else{
    			res += '0';
    			a--;
    		}
    		cnt++;
    		if(cnt == k)break;
    	}

    	if(a < 0 || b < 0){
    		cout << -1 << endl;
    		return;
    	}

    	for(int i = 1; i <= b; i ++)ans += '1';

   		bool vis = false;

    	for(int i = 0 ; res[i] ; i ++){
    		ans += res[i];
    		if(vis == false && res[i] == '0'){
    			vis = true;
    			for(int j = 1; j <= a; j ++)ans += '0';
    		}
   		}
    }

    if(cnt != k){
    	cout << -1 << endl;
    	return;
    }


    cout << ans << endl;
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

