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
    int l,r,idx;
};
node a[N];
bool cmp(node A,node B){
    if(A.l == B.l)return A.r < B.r;
    return A.l < B.l;
}
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i].l >> a[i].r;
        a[i].idx = i;
    }
    sort(a + 1 , a + 1 + n , cmp);
    vector<int> res(n + 1);
    multiset<pair<int,int> > q;
    int idx = 1;

    for(int i = 1; i <= n ; i ++){
        for(int j = idx; a[j].l <= i && idx <= n ; j ++){
            q.insert({a[j].r , a[j].idx});
            idx++;
        }
        if(q.empty()){
            cout << -1 << endl;
            return;
        }
        auto pi = * q.begin();
        q.erase(q.begin());
        if(pi.first < i){
            cout << -1 << endl;
            return;
        }
        res[pi.second ] = i;
    }

    for(int i = 1; i <= n ; i ++){
        cout << res[i] << ' ';
    }
    cout << endl;

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

