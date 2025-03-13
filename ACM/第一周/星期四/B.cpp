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
    string s;
    cin >> s;
    int a,b,c;
    c = 0;
    int i;
    int temp = 0;
    for(i = 0 ; s[i] != '+' ; i ++){
        temp++;
    }
    a = temp;
    temp = 0;
    for(i = i + 1;s[i] != '=' ; i ++){
        temp++;
    }
    b = temp;
    for(i = i + 1; s[i] ; i ++){
        c++;
    }
    if(c - (a + b) == 2){
        a++;
        c--;
        for(int i = 1; i <= a; i ++)cout << '|';
        cout << "+";
        for(int i = 1; i <= b; i ++)cout << '|';
        cout << "=";
        for(int i = 1; i <= c; i ++)cout << '|';
        cout << endl;
    }else if((a + b) - c == 2) {
        if(a != 1)a--;
        else b--;
        c++;
        for(int i = 1; i <= a; i ++)cout << '|';
        cout << "+";
        for(int i = 1; i <= b; i ++)cout << '|';
        cout << "=";
        for(int i = 1; i <= c; i ++)cout << '|';
        cout << endl;
    }else if(a + b == c) {
        for(int i = 1; i <= a; i ++)cout << '|';
        cout << "+";
        for(int i = 1; i <= b; i ++)cout << '|';
        cout << "=";
        for(int i = 1; i <= c; i ++)cout << '|';
        cout << endl;
    }else{
            cout << "Impossible" << endl;
            return;
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

