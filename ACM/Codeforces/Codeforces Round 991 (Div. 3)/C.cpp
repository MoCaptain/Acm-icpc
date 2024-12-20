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
    //mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    //uniform_int_distribution<int> rd(0, 9);
    string s;
    cin >> s;
    int temp = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i = 0 ; s[i] ; i ++){
        if(s[i] == '2')cnt2++;
        if(s[i] == '3')cnt3++;
        temp += (s[i] - '0');
    }
    temp %= 9;

    if(temp == 0){
        cout << "YES" << endl;
        return;
    }
    
    // 4 8 12 16 20 24 28 32 36
    // 4 8 3  7  2  6   1  5  0

    // 6 12 18 24 30 36 42 48 54
    // 6 3  0  6  3  0

    for(int i = 0 ; i <= cnt2 ; i ++){
        for(int j = 0 ; j <= cnt3; j ++){
            if((temp + (i * 2) % 9 + (j * 6) % 9) % 9 == 0){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
    //2 -> 4 
    //3 -> 9
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

