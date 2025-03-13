#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <string>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;

#define endl "\n"
#define int long long
const int N = 1e5 + 10;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << a << ' ' << c << endl;
    // kuan   chang
    if(d - c <= b - a){
        cout << a + 1 << ' ' << c << endl;
        cout << b << ' ' << c + 1 << endl;
    }else{
        cout << a << ' ' << c + 1 << endl;
        cout << a + 1 << ' ' << d << endl;
    }
}
signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T;
    T = 1;
    cin >> T;
    while(T--)solve();
    return 0;
}