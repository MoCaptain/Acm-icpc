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
    int n;
    cin >> n;
    if(n == 1){
    	cout << "20250121" << endl;
    }else if(n == 2){
    	cout << "20250123" << endl;
    }else if(n == 3){
    	cout << "20250126" << endl;
    }else if(n == 4){
    	cout << "20250206" << endl;
    }else if(n == 5){
    	cout << "20250208" << endl;
    }else if(n == 6){
    	cout << "20250211" << endl;
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

