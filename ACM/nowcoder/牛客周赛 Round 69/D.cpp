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

using namespace std;

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
int vis[10][10];
int mp[10][10][10];
bool v[10];
int n , m , q;
int res = 100;
void dfs(int cnt, vector<vector<int> > nw(n , vector<int> (m))){

	for(int i = 1; i <= n ; i ++){
		for(int j = 1; j <= m ; j ++){

			if(nw[i][j] == vis[i][j])return;

			if(i == n && j == m){
				res = min(res , cnt);
			}
		}
	}

	for(int i = 1; i <= q ; i ++){
		if(v[i])continue;
		v[i] = true;
		
		int temp[10][10];

		for(int a = 1; a <= n ; a ++){
			for(int b = 1; b <= m ; b ++){
				temp[a][b] = nw[a][b];
				nw[a][b] |= mp[a][b][i];
			}
		}

		dfs(cnt + 1);

		for(int a = 1; a <= n ; a ++){
			for(int b = 1; b <= m ; b ++){
				nw[a][b] = temp[a][b];
			}
		}

		v[i] = false;
	}

}

void solve(){
    cin >> n >> m >> q;
    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= m ; j ++){
    		cin >> vis[i][j];
    	}
    }

    for(int z = 1; z <= q; z ++){
    	for(int i = 1; i <= n ; i ++){
    		for(int j = 1; j <= m ; j ++){
    			cin >> mp[i][j][z];
    		}
   	 	}
    }
    vector<vector<int> > ttt;
    dfs(0,ttt);

    if(res == 100){
    	cout << -1 << endl;
    }else{
    	cout << res << endl;
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

