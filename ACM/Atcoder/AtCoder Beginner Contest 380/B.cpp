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

using namespace std;
#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin >> s;
    int temp = 0;
    for(int i = 1; i <= s.size() ; i ++){
        if(s[i] == '|'){
            cout << temp << ' ';
            temp = 0;
        }else{
            temp++;
        }
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;
    T = 1;
    //cin >> T;
    while(T--)solve();
    return 0;
}
