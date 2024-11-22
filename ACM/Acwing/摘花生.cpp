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
    int n,m;
    cin >> n >> m;
    int a[n + 1][m + 1],s[n + 1][m + 1];
    for(int i = 0 ; i <= n ; i ++){
    	for(int j = 0 ; j <= m ; j ++){
    		s[i][j] = 0;
            a[i][j] = 0;
    	}
    }
    
    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= m ; j ++){
    		cin >> a[i][j];
    	}
    }

    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= m ; j ++){
    		s[i][j] = a[i][j] + max(s[i - 1][j] , s[i][j - 1]);	
    	}
    }
    cout << s[n][m] << endl;


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

