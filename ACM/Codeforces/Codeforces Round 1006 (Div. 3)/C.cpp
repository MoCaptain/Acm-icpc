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
    int n,x;
    cin >> n >> x;
    if(n == 1){
        cout << x << endl;
        return;
    }


    int temp = 0;
    int sum = 0;
    for(int i = 1; i <= n ; i ++){
        if(i == n && (sum | temp) != x){
            cout << x << ' ';
            cout << endl;
            return;
        }
        if(((sum | temp) | x) == x){
            sum |= temp;
            cout << temp << ' ';
            temp++;
        }else{
            cout << 0 << ' ';
        }
    }
    cout << endl;

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

