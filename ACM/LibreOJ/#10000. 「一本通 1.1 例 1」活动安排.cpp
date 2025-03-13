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
    int a,b,num;
}a[N];
bool cmp(node A,node B){
    return A.b < B.b;
}

void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i ++){
        cin >> a[i].a >> a[i].b;
        a[i].num = a[i].b - a[i].a;
    }
    sort(a + 1 , a + 1 + n , cmp);
    int res = 1;
    int bg = a[1].b;
    for(int i = 2; i <= n ; i ++){
        if(a[i].a >= bg){
            bg = a[i].b;
            res++;
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
    //std::cin >> T;
    while(T--)solve();
    return 0;
}

