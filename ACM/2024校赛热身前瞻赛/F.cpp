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

    int x,y;
    map<int,vector<int> > mpx,mpy;
    vector< pair<int,int> > vec(n + 1);

    for(int i = 1; i <= n ; i ++){
    	cin >> x >> y;
    	mpx[x].push_back(y);
    	mpy[y].push_back(x);
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

