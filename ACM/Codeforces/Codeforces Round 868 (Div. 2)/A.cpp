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

#define int long long
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

void solve(){
	int n,k;
	std::cin >> n >> k;
	for(int i = 0 ; i <= n ; i ++){
		int res = i * (i - 1) / 2 + (n - i) * (n - i - 1) / 2;//1的数量和-1的数量

		if(res == k){
			std::cout << "YES" << std::endl;
			for(int j = 0; j < i ; j ++){
				std::cout << 1 << ' ';
			}
			for(int j = i; j < n ; j ++){
				std::cout << -1 << ' ';
			}
			std::cout << std::endl;
			return;
		}

	}
	std::cout << "NO" << std::endl;

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
