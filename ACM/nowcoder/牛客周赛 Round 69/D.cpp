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
int nw[10][10];
bool v[10];
int n , m , q;
int res = 100;
vector<int> ans;

void dfs(int cnt , vector<int> teq){
	if(cnt > res || cnt > q)return;
    bool flag = true;

    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            if(nw[i][j] == 1 && vis[i][j] == 1)return;
            if(nw[i][j] == 0 && vis[i][j] == 0){
            	flag = false;
            	break;
            }
            if(i == n && j == m && flag && cnt < res){
                res = cnt;
                ans = teq;
                return;
            }
        }
        if(!flag)break;
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
        
        teq.push_back(i);
        dfs(cnt + 1 , teq);
        teq.pop_back();
        
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
            char op;
            cin >> op;
            vis[i][j] = op - '0';
        }
    }

    for(int z = 1; z <= q; z ++){
        for(int i = 1; i <= n ; i ++){
            for(int j = 1; j <= m ; j ++){
                char op;
                cin >> op;
                mp[i][j][z] = op -'0';
            }
        }
    }

    vector<int> teq;
    dfs(0,teq);


    if(res == 100){
        cout << -1 << endl;
    }else{
        cout << res << endl;
        for(auto it : ans){
        	cout << it << ' ';
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

