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

void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    int tmp;
    set<int> A,B;
    for(int i = 1; i <= n ; i ++){
        cin >> tmp;
        A.insert(tmp);
    }
    for(int i = 1; i <= n ; i ++){
        cin >> tmp;
        B.insert(tmp);
    }
    set<int> C;
    for(auto it : A){
        for(auto it2 : B){
            C.insert(it + it2);
        }
    }
    if(C.size() >= 3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

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

