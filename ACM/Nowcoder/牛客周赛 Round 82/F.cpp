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
    int n;
    cin >> n;
    vector<int> res;
    set<int> st;
    for(int i = 1; i <= n ; i ++){
        int temp = (i & -i);
        res.push_back(temp);
        st.insert(temp);
    }
    cout << st.size() << endl;
    for(auto it : res){
        cout << it << ' ';
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

