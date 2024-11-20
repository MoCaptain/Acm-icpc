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
#include <ctime>

using namespace std;
#define int long long
#define endl "\n"

const int N = 1e6 + 10;

int tr[N << 4][2];
int cnt[N << 4];
int top = 0;
void Trie_c(int x){
    int root = 0,num;
    for(int i = 31; i >= 0; i --){
        num = (x >> i) & 1;
        if(!tr[root][num])tr[root][num] = ++top;
        root = tr[root][num];
        cnt[root]++;//他有多少个子节点
    }
}
int n,k;
int Trie_sec(int x){
    int res = 0,num;
    int root = 0;
    for(int i = 31; i >= 0 ; i --){
        num = (x >> i) & 1;
        int temp = (k >> i) & 1;
        if(temp){
            root = tr[root][!num];
        }else{
            res += cnt[tr[root][!num]];
            root = tr[root][num];
        }
        if(!root)break;
    }
    return res + cnt[root];
}
int a[N];
void solve(){
    cin >> n >> k;

    Trie_c(0);
    int temp = 0;
    int ans = 0;
    for(int i = 1; i <= n ; i ++){
        cin >> a[i];
        temp ^= a[i];
        ans += Trie_sec(temp);
        Trie_c(temp);
    }
    cout << ans << endl;
}

signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T;
    T = 1;
    //cin >> T;
    while(T--)solve();
    return 0;
}