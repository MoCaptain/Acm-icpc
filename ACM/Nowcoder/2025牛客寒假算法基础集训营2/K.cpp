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
#include <unordered_map>

using namespace std;

//#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
char mp[550][550];
int minn;
int n,m;
set<pair<int,int> > st;
void dfs(int x,int y){
    if(x < 1 || x > n || y < 1 || y > m || mp[x][y] == '3')return;
    if(mp[x][y] == '0'){
        st.insert({x,y});
        return;
    }
    mp[x][y] = '3';
    dfs(x + 1 , y);
    dfs(x - 1 , y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}
void solve(){

    cin >> n >> m;
    minn = 1e9;
    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            cin >> mp[i][j];
        }
    }

    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            if(mp[i][j] == '1'){
                st.clear();
                dfs(i,j);
                int tmp = st.size();
                minn = min(minn , tmp);
            }
        }
    }

    cout << minn << endl;


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

