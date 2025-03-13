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
bool cmp(pair<int,int> A, pair<int,int> B){
	return A.first > B.first;
}
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    std::vector<int> e[n + 1];
    vector<int> d(n + 1);
    for(int i = 1; i < n ; i ++){
    	int u,v;
    	cin >> u >> v;
    	e[u].push_back(v);
    	e[v].push_back(u);
    	d[u]++;
    	d[v]++;
    }
    vector<pair<int,int> > pi;
    for(int i = 1; i <= n ; i ++){
    	pi.push_back({d[i] , i});
    }

    sort(pi.begin() , pi.end() , cmp);
    int tmp = pi[0].first;
    int cnt = 0;

    for(int i = 0; i < pi.size(); i ++){
    	if(pi[i].first == tmp)cnt++;
    	else break;
    }

    if(cnt > 2){
    	cout << pi[0].first * 2 - 1 << endl;
    }else if(cnt == 2){
    	bool vis = false;
    	for(auto it : e[pi[0].second]){
    		if(it == pi[1].second){
    			vis = true;
    			break;
    		}
    	}
    	if(vis){
    		cout << pi[0].first * 2 - 2 << endl;
    	}else{
    		cout << pi[0].first * 2 - 1 << endl;
    	}
    }else{
    	for(auto it : e[pi[0].second]){
    		d[it]--;
    	}
    	int maxx = 0;
    	for(int i = 1; i <= n ; i ++){
    		if(i == pi[0].second)continue;
    		maxx = max(maxx , d[i]);
    	}
    	cout << pi[0].first + maxx - 1 << endl;
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

