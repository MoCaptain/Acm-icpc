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
    int len = s.length();
    for(int i = 0 ; i < len ; i ++){
        int idx = i;
        int maxx = s[i] - '0';
        for(int j = i + 1; j < min(len , i + 9); j ++){
            if((s[j] - '0') - ( j - i ) > maxx){
                maxx = s[j] - '0' - (j - i);
                idx = j;
            }
        }

        char tmp = maxx + '0';
        for(int j = idx ; j > i ; j --){
            swap(s[j] , s[j - 1]);
        }
        s[i] = tmp;

    }
    cout << s << endl;
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

