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
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
int a[N],b[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    int ch = 0;
    map<int,int> mp,mp2;

    int num = 1;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        if(a[i] != ch){
            if(i == n){
                mp[a[i]] = max(mp[a[i]] , 1);
            }
            mp[ch] = max(num , mp[ch]);
            ch = a[i];
            num = 1;
            continue;
        }
        num ++;
        if(i == n){
            mp[ch] = num;
        }
    }

    ch = -1;
    for(int i = 1; i <= n ; i ++){
        cin >> b[i];
        if(b[i] != ch){
            if(i == n){
                mp2[b[i]] = max(mp2[b[i]] , 1);
            }
            mp2[ch] = max(num , mp2[ch]);
            ch = b[i];
            num = 1;
            continue;
        }
        num ++;
        if(i == n){
            mp2[ch] = num;
        }
    }

    int res = 0;

    for(auto it : mp){
        res = max(res , it.second + mp2[it.first]);
    }

    for(auto it : mp2){
        res = max(res , it.second + mp[it.first]);
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

