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
    int q;
    cin >> q;
    char ch;
    int x;
    cin >> ch >> x;
    map<int,int> mp;
    int mid = 2e5;
    mp[x] = mid;
    int l = mid - 1;
    int r = mid + 1;
    for(int i = 2; i <= q; i ++){
    	cin >> ch >> x;
    	if(ch == 'L'){
    		mp[x] = l --;
    	}else if(ch == 'R'){
    		mp[x] = r ++;
    	}else if(ch == '?'){
            //cout << mp[x] << ' ' << l << ' ' << r << endl;
    		cout << min(mp[x] - l - 1 , r - mp[x] - 1) << endl;
    	}
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

