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

#define endl "\n"
const int N = 5e5 + 10;
const int mod = 1e9 + 7;

pair<int,int> a[N];
int n;
bool check(int x){
    int res = a[1].first + a[1].second + x;

    for(int i = 2; i <= n ; i ++){
        if(res >= a[i].first){
            res = max(a[i].first + a[i].second + x , res);
        }else{
            //只要走不到终点就false
            //x 小了
            return false;
        }
    }

    return true;
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i].first >> a[i].second;
    }

    int res = 0;
        int l = 0 , r = 1e9 + 1;
        int mid;
        while(l < r){
            mid = (l + r) / 2;
            if(check(mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
    cout << l << endl;
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

