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
const int modd = 998244353;
int a[N];
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }

    for(int i = 2; i <= n ; i ++){
        if(a[i] > a[i - 1]){
            cout << 0 << endl;
            return;
        }
    }

    int res = 1;

    map<int,bool> mp;


    for(int i = 1; i <= n ; i ++){
        if(mp[a[i]]){
            int temp = (n - a[i]) - i + 2;//剩的选项
            if(temp <= 0){
                cout << 0 << endl;
                return;
            }
            res = (res * temp) % modd;
        }else{
            mp[a[i]] = true;
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

