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
    int n,k;
    cin >> n >> k;
    if(k & 1){
        cout << 1 << endl;
        return;
    }
    //MID = n;
    int idx = (pow(2 , n) + 1) / 2;
    int num = n;
    if(idx == k){
        cout << num << endl;
        return;
    }
    int L = 0;
    int R = pow(2 , n);
    while(idx != k){
        if(k > idx){
            L = idx;
            idx = (idx + R) / 2;
            num--;
        }else if(k < idx){
            R = idx;
            idx = (L + idx) / 2;
            num--;
        }
    }
    cout << num << endl;

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

