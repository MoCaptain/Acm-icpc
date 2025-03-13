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

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

pair<int,int> a[N];
int b[N];
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i].first;
        a[i].second = i;
        b[i] = a[i].first;
    }

    a[n + 1].first = 1e12;

    sort(a + 1 , a + 1 + n);

    int l = a[1].second;
    int r = a[1].second;
    
    int maxx = max(a[1].first * 2 , a[n].first);
    int res = maxx - min(a[1].first * 2 , a[2].first);

    for(int i = 2; i <= n ; i ++){
        while(a[i].second < l){
            l --;
            maxx = max(maxx,b[l] * 2);
        }
        while(a[i].second > r){
            r ++;
            maxx = max(maxx, b[r] * 2);
        }

        res = min(res , maxx - min(a[1].first * 2 , a[i + 1].first));

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

