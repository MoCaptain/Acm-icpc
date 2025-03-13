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
#include <unordered_map>

using namespace std;

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char , int > mp;
    int res1 = 0;
    for(int i = n - 1 ; i >= 0 ; i --){
        mp[s[i]]++;
        if(mp[s[i]] >= 2 ){
            res1 = i + 1;
            break;
        }
    }
    mp.clear();
    int res2 = 0;
    for(int i = 0 ; i < n ; i ++){
        mp[s[i]]++;
        if(mp[s[i]] >= 2 ){
            res2 = n - i;
            break;
        }
    }
    cout << max(res1,res2) << endl;
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

