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
    int n,m;
    cin >> n >> m;
    vector<int> num(n * m + 1);
    vector<int> cnt(n + 1);
    bool vis = false;
    for(int i = 1; i <= n ; i ++){
    	vector<int> temp;

    	for(int j = 1; j <= m ; j ++){
    		int x;
    		cin >> x;
    		temp.push_back(x);
 			num[x] = i;
    	}

    	sort(temp.begin() , temp.end());

    	for(int j = 1; j < m ; j ++){
    		if(temp[j] - temp[j - 1] == 1){
    			vis = true;
    			break;
    		}
    	}
    }
    if(n == 1)vis = false;
    if(vis){
    	cout << "-1" << endl;
    	return;
    }

    for(int i = 0; i < n * m; i ++){
    	cnt[num[i]]++;
    	if(cnt[num[i]] == m){
    		cout << num[i] << ' ';
    	}
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

