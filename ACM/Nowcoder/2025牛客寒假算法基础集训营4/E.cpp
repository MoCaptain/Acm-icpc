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
    int l,r,now;
}a[1010][1010];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n,m;
    cin >> n >> m;
    int res = 0;

    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            cin >> a[i][j].now;
            a[i][j].l = a[i - 1][j - 1].l + a[i][j].now;
            a[i][j].r = a[i - 1][j + 1].r + a[i][j].now;
        }
    }



    for(int i = 1; i <= n ; i ++){
        int tx,ty;
        tx = i,ty = 1;
        while(tx > 0 && ty <= m){
            tx--;
            ty++;
            if(tx == 0 || ty == m + 1)break;
            a[tx][ty].r = a[i][1].r;

        }

        tx = i,ty = m;
        while(tx > 0 && ty > 0){
            tx--;
            ty--;
            if(tx == 0 || ty == 0)break;
            a[tx][ty].l = a[i][m].l;
        }

    }

    for(int i = 2; i <= m ; i ++){
        int tx,ty;
        tx = n,ty = i;
        while(tx > 0 && ty <= m){
            tx--;
            ty++;
            if(tx == 0 || ty == m + 1)break;
            a[tx][ty].r = a[n][i].r;
        }
        tx = n,ty = i;
        while(tx > 0 && ty > 0){
            tx--;
            ty--;
            if(tx == 0 || ty == 0)break;
            a[tx][ty].l = a[n][i].l;
        }
    }

    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            res = max(res , a[i][j].l + a[i][j].r - a[i][j].now);
            a[i][j].l = a[i][j].r = a[i][j].now = 0;
        }
    }


    cout << res << endl;

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

