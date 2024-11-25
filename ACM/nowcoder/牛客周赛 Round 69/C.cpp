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
    int n,h;
    cin >> n >> h;
    for(int i = 1; i <= n ; i ++){
    	int x,y,z;
    	cin >> x >> y >> z;
        int temp = z + (h - z) * 2;
        int op = __gcd(x,y);
        op = __gcd(op , temp);
        cout << x / op << ' ' << y / op << ' ' << temp / op << endl;
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

