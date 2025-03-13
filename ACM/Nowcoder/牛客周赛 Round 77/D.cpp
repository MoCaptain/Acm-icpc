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
int w[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    vector<int> cnt(70);
    int maxx = 0;

    map<int,set<int> > mp;

    for(int i = 1; i <= n ; i ++){
    	cin >> w[i];
    	for(int j = 0 ; j <= 63; j ++){
    		int temp = ((w[i]>> j) & 1);
    		if(temp){
    			cnt[j]++;
    			maxx = max(maxx , j);
    		}else{
    			mp[j].insert(i);
    		}
    	}
    }

    int res = 0;
    int sum = 0;

    for(int i = 0; i <= maxx ; i ++){
    	if(cnt[i] == 0){
    		int temp = n;
    		temp -= mp[i].size();
    		sum += mp[i].size();
    		res = max(res , temp);
    	}
    }


    cout << max(res , n - sum) << endl;


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

