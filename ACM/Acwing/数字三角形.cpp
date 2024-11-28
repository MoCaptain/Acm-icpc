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
int a[110][110];
int s[110][110];
void solve(){
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= i ; j ++){
    		cin >> a[i][j];
    	}
    }

    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= i; j ++){
    		s[i][j] = a[i][j] + max(s[i - 1][j] , s[i - 1][j - 1]);
    	}
    }

    //因为左右行走次数差最大为1
    if(n % 2 == 0){
        cout << max(s[n][n / 2] , s[n][n / 2 + 1]) << endl;
    }else{
        cout << s[n][n / 2 + 1] << endl;
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

