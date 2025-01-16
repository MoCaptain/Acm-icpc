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

//#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;


void solve(){
    
    int n;
    cin >> n;
    map<int,int> mp;
    vector<int> r(n + 1);
    for(int i = 1; i <= n ; i ++){
        cin >> r[i];
        mp[r[i]]++;
    }
    vector<int> vc;
    for(int i = 1; i <= n ; i ++){
        if(!mp[i]){
            vc.push_back(i);
        }
    }
    int res = 2;
    while(vc.size()){
        res++;
        vector<int> VC;
        for(auto it : vc){
            mp[r[it]]--;
            if(!mp[r[it]]){
                VC.push_back(r[it]);
            }
        }
        vc = VC;
    }
    cout << res << endl;


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

