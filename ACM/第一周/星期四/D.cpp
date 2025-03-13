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
    string s;
    cin >> s;
    //  rb          br
    int sum1 = 0,sum2 = 0;
    int r1,b1,r2,b2;
    r1 = b1 = r2 = b2 = 0;
    for(int i = 0 ; s[i] ; i ++){
        if(s[i] == 'r' && i % 2 ==0)r1 ++;
        if(s[i] == 'b' && i % 2 == 0)b2 ++;
        if(s[i] == 'r' && i & 1)r2 ++;
        if(s[i] == 'b' && i & 1)b1 ++;
    }

    sum1 = r1 + b1;
    sum2 = r2 + b2;

    if(sum1 > sum2){//rb

        int res = min(r2 , b2);
        r2 -= res;
        b2 -= res;
        cout << res + r2 + b2 << endl;
    }else{//br
        int res = min(r1 , b1);
        r1 -= res;
        b1 -= res;
        cout << res + r1 + b1 << endl;
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

