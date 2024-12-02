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
bool vis[N];
void solve(){
    int n,r;
    cin >> n >> r;
    vector<int> a(N);

    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }
    int res = 0;

    int idx = r;
    while(1){
        if(a[idx]){
            res++;
            vis[idx] = 1;
            if(idx + r - 1 >= n)break;
            idx = idx + 2 * r - 1;
            continue;
        }

        while(!a[idx] && idx && !vis[idx]){//没被加热 且 没用过加热器 且 不在 0 处
            idx--;//找加热器
        }

        if(vis[idx] || idx == 0){
            cout << -1 << endl;
            return;
        }

        res ++;
        vis[idx] = 1;

        if(idx + r - 1 >= n)break;

        idx = idx + 2 * r - 1;
    }
    cout << res << endl;
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

