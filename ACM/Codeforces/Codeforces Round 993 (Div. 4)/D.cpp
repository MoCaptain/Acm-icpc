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
bool vis[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    memset(vis , 0 , sizeof vis);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b;
    map<int,int> mp;
    set<int> st;
    for(int i = 1; i <= n ; i ++){
    	st.insert(i);
    }
    for(int i = 1; i <= n ; i ++){
    	cin >> a[i];
    	mp[a[i]]++;
    	if(st.find(a[i]) != st.end()){
    		st.erase(a[i]);
    	}
    	
    }
    for(int i = 1; i <= n ; i ++){
    	if(!vis[a[i]]){
    		b.push_back(a[i]);
    		vis[a[i]] = true;
    	}else{
    		int temp = *st.begin();
    		st.erase(temp);
    		b.push_back(temp);
    	}
    }

    for(auto it : b){
    	cout << it << ' ';
    }
    cout << endl;
    

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

