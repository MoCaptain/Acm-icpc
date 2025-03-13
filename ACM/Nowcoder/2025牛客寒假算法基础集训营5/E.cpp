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

char mp[5][5];

void solve(){

    int num1 = 0;

    for(int i = 1; i <= 3; i ++){
        for(int j = 1; j <= 3; j ++){
            cin >> mp[i][j];
            if(mp[i][j] == 'X')num1++;
        }
    }

    if(num1 == 1 || num1 == 2 || num1 == 0){
        cout << "Yes" << endl;
        return;
    }
        if(mp[1][1] != 'O' && mp[1][2] != 'O' && mp[1][3] != 'O'){
            int num = 0;
            if(mp[1][1] == 'G')num++;
            if(mp[1][2] == 'G')num++;
            if(mp[1][3] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[2][1] != 'O' && mp[2][2] != 'O' && mp[2][3] != 'O'){
            int num = 0;
            if(mp[2][1] == 'G')num++;
            if(mp[2][2] == 'G')num++;
            if(mp[2][3] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[3][1] != 'O' && mp[3][2] != 'O' && mp[3][3] != 'O'){
            int num = 0;
            if(mp[3][1] == 'G')num++;
            if(mp[3][2] == 'G')num++;
            if(mp[3][3] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[1][1] != 'O' && mp[2][1] != 'O' && mp[3][1] != 'O'){
            int num = 0;
            if(mp[1][1] == 'G')num++;
            if(mp[2][1] == 'G')num++;
            if(mp[3][1] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[1][2] != 'O' && mp[2][2] != 'O' && mp[3][2] != 'O'){
            int num = 0;
            if(mp[1][2] == 'G')num++;
            if(mp[2][2] == 'G')num++;
            if(mp[3][2] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[1][3] != 'O' && mp[2][3] != 'O' && mp[3][3] != 'O'){
            int num = 0;
            if(mp[1][3] == 'G')num++;
            if(mp[2][3] == 'G')num++;
            if(mp[3][3] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[1][1] != 'O' && mp[2][2] != 'O' && mp[3][3] != 'O'){
            int num = 0;
            if(mp[1][1] == 'G')num++;
            if(mp[2][2] == 'G')num++;
            if(mp[3][3] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        if(mp[1][3] != 'O' && mp[2][2] != 'O' && mp[3][1] != 'O'){
            int num = 0;
            if(mp[1][3] == 'G')num++;
            if(mp[2][2] == 'G')num++;
            if(mp[3][1] == 'G')num++;
            if(num != 3){
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;


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

