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
int a[N];
int s[N];
void solve(){
    int n,q;
    cin >> n >> q;
    int sum = 0;
    for(int i = 0; i <= n + 1; i ++){
        s[i] = 0;
        a[i] = 0;
    }

    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
        sum += a[i];
    }

    for(int i = 1; i <= q; i ++){
        int l,r,k;
        cin >> l >> r >> k;

        int temp1 = (r - l + 1) * k;
        int temp2 = s[r] - s[l - 1];

        int temp3 = (temp1 - temp2);

        if(sum & 1){
            if(temp3 & 1){
                cout << "NO" << endl;
                continue;
            }else{
                cout << "YES" << endl;
                continue;
            }
        }else{
            if(temp3 & 1){
                cout << "YES" << endl;
                continue;
            }else{
                cout << "NO" << endl;
                continue;
            }
        }

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

