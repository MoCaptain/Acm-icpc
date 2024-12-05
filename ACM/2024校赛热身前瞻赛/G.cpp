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
int n,m;

int res = 0;
struct node{
	int u,v,w;
}e[N];

bool cmp(node A, node B){
	return A.w < B.w;
}
int fa[N];
int find(int x){
	if(fa[x] == x)return x;
	return fa[x] = find(fa[x]);
}

void kruskal(){

	sort(e + 1, e + 1 + m , cmp);

	for(int i = 1; i <= n ; i ++)fa[i] = i;

	for(int i = 1; i <= m ; i ++){
		int x = find(e[i].u);
		int y = find(e[i].v);
		if(x != y){
			fa[x] = y;
			res += e[i].w;
		}else{
			if(e[i].w < 0){
				res += e[i].w;
			}
		}
	}
}

void solve(){
    cin >> n >> m;
    int x,y,z;
    int sum = 0;
    for(int i = 1; i <= m; i ++){
    	cin >> x >> y >> z;
    	e[i].u = x;
    	e[i].v = y;
    	e[i].w = z;
    	sum += z;
    }

    kruskal();

    cout << sum -res << endl;
    
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

