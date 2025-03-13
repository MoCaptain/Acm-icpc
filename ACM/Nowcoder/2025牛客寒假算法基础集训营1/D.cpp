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
int a[N];
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i = 1; i <= n ; i ++){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    if(n & 1){
        cout << "No" << endl;
        return;
    }
    if(mp.size() == 2){
        int tmp = -1;
        for(auto it : mp){
            if(tmp == -1){
                tmp = it.second;
                continue;
            }
            if(tmp == it.second){
                cout << "Yes" << endl;
                return;
            }
        }
    }
    
    cout << "No" << endl;
    



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

