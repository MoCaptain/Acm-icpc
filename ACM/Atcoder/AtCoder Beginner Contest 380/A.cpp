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
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
   	string s;
   	cin >> s;
   	map<char ,int > mp;
   	for(int i = 0 ; s[i]; i ++){
   		mp[s[i]]++;
   	}
   	if(mp['1'] == 1 && mp['2'] == 2 && mp['3'] == 3){
   		cout << "Yes" << endl;
   	}else{
   		cout << "No" << endl;
   	}
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
