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
pair<int,int> a[N];
void solve(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i].first;
        a[i].second = i;
        mp[a[i].first]++;
    }
    for(auto it : mp){
        if(it.second != 1){
            cout << "NO" << endl;
            return;
        }
    }
    
    sort(a + 1 , a + 1 + n);
    cout << "YES" << endl;
    for(int i = 1; i <= n ; i ++){
        cout << a[i].second << ' ';
    }
    cout << endl;


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

