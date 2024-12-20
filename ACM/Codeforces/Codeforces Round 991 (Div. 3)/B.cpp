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
    //mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    //uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }
    int sum1 = 0,sum2 = 0;
    int cnt1 = 0,cnt2 = 0;
    for(int i = 1; i <= n ; i ++){
        if(i & 1){
            sum1 += a[i];
            cnt1++;
        }else{
            sum2 += a[i];
            cnt2++;
        }
    }
    if(sum1 % cnt1 != 0 || sum2 % cnt2 != 0){
        cout << "NO" << endl;
        return;
    }
    if(sum1 / cnt1 == sum2 / cnt2){
        cout << "YES" << endl;
    }else{
        cout << "NO"<< endl;
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

