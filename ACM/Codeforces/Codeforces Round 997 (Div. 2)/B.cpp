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
char mp[1010][1010];

struct node{
	int num;
	int cnt;
}a[N],b[N];

bool cmp(node A,node B){
	if(A.cnt == B.cnt)return A.num > B.num;
	return A.cnt < B.cnt;
}
void solve(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> rd(0, 9);
    int n;
    cin >> n;
    
    for(int i = 1; i <= n ; i ++){
    	b[i].num = a[i].num = i;
    	b[i].cnt = a[i].cnt = 0;
    }

    for(int i = 1; i <= n ; i ++){
    	for(int j = 1; j <= n ; j ++){
    		cin >> mp[i][j];
    		if(j > i)a[i].cnt++;
    	}
    }

    for(int i = 1; i <= n ; i ++){
    	for(int j = i + 1; j <= n ; j ++){
    		if(mp[i][j] == '1'){
    			if(a[i].cnt < a[j].cnt){
    				a[j].cnt++;
    				mp[i][j] = mp[j][i] = '1';
    			}
    		}
    		
    	}
    }



    sort(a + 1 , a + 1 + n , cmp);

    for(int i = 1; i <= n ; i ++){
    	cout << b[i].num << ' ';
    }
    cout << endl;


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

