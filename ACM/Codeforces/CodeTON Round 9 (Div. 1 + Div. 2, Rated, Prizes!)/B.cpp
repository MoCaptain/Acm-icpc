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
    string s;
    cin >> s;
    if(s.size() == 1){
        cout << -1 << endl;
        return;
    }else if(s.size() == 2){
        if(s[0] == s[1]){
            cout << s << endl;
        }else{
            cout << -1 << endl;
        }
        return;
    }else{
        int len = s.size();
        for(int i = 0 ; i < len - 1; i ++){
            if(s[i] == s[i + 1]){
                cout << s.substr(i , 2) << endl;
                return;
            }
        }

        for(int i = 0 ; i < len - 2; i ++){
            if(s[i] != s[i + 2]){
                cout << s.substr(i , 3) << endl;
                return;
            }
        }
    }
    cout << -1 << endl;


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

