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
    int len = s.size();
    vector<int> idx;
    for(int i = 0 ; i < len; i ++){
    	if(s[i] == ',')idx.push_back(i);
    }

    string s1,s2;
    s1 = s2 = "";
    for(int i = idx[0] + 1; i < idx[1] ; i ++){
    	s1 += s[i];
    }
    for(int i = idx[2] + 1; i < len ; i ++){
    	s2 += s[i];
    }
    int a = stoll(s2);
    int b = stoll(s1);
    cout << a - b - 1ll << endl;

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

