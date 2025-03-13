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
struct node{
    int cnt;
    int idx;
};
bool cmp(node A,node B){
    return A.cnt < B.cnt;
}
node a[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i ++){
        a[i].idx = i;
    }

    for(int i = 1; i < n ; i ++){
        int u,v;
        cin >> u >> v;
        a[u].cnt++;
        a[v].cnt++;
    }
    sort(a + 1, a + 1 + n , cmp);
    int res = 0;
    for(int i = 1; i <= n ; i ++){
        if(a[i].cnt == 1){
            res++;
        }
    }
    if(res == 2){
        cout << a[1].idx << ' ' << a[2].idx << endl;
    }else{
        cout << -1 << endl;
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

