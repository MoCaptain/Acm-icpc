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
    std::string s;
    cin >> s;
    s = '0' + s;
    int n = s.size();

    for(int i = n - 1; i > 0; i --){
        if(s[i] == '9' + 1){
            s[i] = '0';
            s[i - 1]++;
        }
        if(s[i] >= '5'){
            n = i;
            s[i - 1] ++;
        }
    }

    for(int i = 0; i < s.size() ; i ++){
        if(i == 0 && s[i] == '0')continue;
        if(i < n)cout << s[i];
        else cout << '0';
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

