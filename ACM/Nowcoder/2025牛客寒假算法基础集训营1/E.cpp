//中位数定理
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
    int n;
    cin >> n;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int mid1 = a[n / 4 + 1];
    int mid2 = a[n / 4 + n / 2 + 1];

    if(mid1 != mid2){
        int res = 0;
        for(int i = 1; i <= n / 2; i ++){
            res += abs(a[i] - mid1);
        }
        for(int i = n / 2 + 1; i <= n ; i ++){
            res += abs(a[i] - mid2);
        }
        cout << res << endl;
    }else{
        int res1,res2;
        res1 = res2 = 0;
        for(int i = 1; i <= n / 2; i ++){
            res1 += abs(a[i] - (mid1 - 1));
        }
        for(int i = n / 2 + 1; i <= n ; i ++){
            res1 += abs(a[i] - mid2);
        }

        for(int i = 1; i <= n / 2; i ++){
            res2 += abs(a[i] - mid1);
        }
        for(int i = n / 2 + 1; i <= n ; i ++){
            res2 += abs(a[i] - (mid2 + 1));
        }
        cout << min(res1 , res2) << endl;
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

