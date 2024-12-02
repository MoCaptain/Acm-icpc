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
int n;

char mp1[220][220];
char mp2[220][220];
char nmp[220][220];
int x1,y12;
int bx1,by1,bx2,by2,ex1,ey1,ex2,ey2;



bool jud(){
    bool vis = true;
    int bx3,by3,ex3,ey3;
    bx3 = by3 = 500;
    ex3 = ey3 = 0;

    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= n ; j ++){
            if(nmp[i][j] == '#'){
                bx3 = min(bx3 , i);
                ex3 = max(ex3 , i);
                by3 = min(by3 , j);
                ey3 = max(ey3 , j);
            }
        }
    }

    for(int i = 0 ; i <= x1; i ++){
        for(int j = 0; j <= y12; j ++){

            if(mp2[bx2 + i][by2 + j] != nmp[bx3 + i][by3 + j]){
                vis = false;
            }

        }
    }

    return vis;

}

void change(){

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = mp1[n - j + 1][i];
        }
    }

}

void change3(){

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = mp1[n - j + 1][i];
        }
    }

    int temp[220][220];
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            temp[i][j] = nmp[i][j];
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = temp[n - j + 1][i];
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            temp[i][j] = nmp[i][j];
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = temp[n - j + 1][i];
        }
    }

}

void change2(){

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = mp1[n - j + 1][i];
        }
    }

    int temp[220][220];
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            temp[i][j] = nmp[i][j];
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= n; j ++){
            nmp[i][j] = temp[n - j + 1][i];
        }
    }

}

void solve(){
    //mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    //uniform_int_distribution<int> rd(0, 9);

    cin >> n;
    bx1 = by1 = bx2 = by2 = 500;
    ex1 = ex2 = ey1 = ey2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= n ; j ++){
            cin >> mp1[i][j];
            if(mp1[i][j] == '#'){
                cnt1++;
                bx1 = min(bx1 , i);
                ex1 = max(ex1 , i);
                by1 = min(by1 , j);
                ey1 = max(ey1 , j);
            }
        }
    }


    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> mp2[i][j];
            if(mp2[i][j] == '#'){
                cnt2++;
                bx2 = min(bx2 , i);
                ex2 = max(ex2 , i);
                by2 = min(by2 , j);
                ey2 = max(ey2 , j);
            }
        }
    }

    if(cnt1 != cnt2){
        cout << "No" << endl;
        return;
    }

    x1 = abs(bx2 - ex2);
    y12 = abs(by2 - ey2);

    //l
    memset(nmp , ' ' , sizeof nmp);
    change3();
    if(jud()){
        cout << "Yes" << endl;
        return;
    }

    //r
    memset(nmp , ' ' , sizeof nmp);
    change();
    if(jud()){
        cout << "Yes" << endl;
        return;
    }

    // 0
    memset(nmp , ' ' , sizeof nmp);
    for(int i = 1; i <= n ; i ++){
        for(int j = 1; j <= n ; j ++){
            nmp[i][j] = mp1[i][j];
        }
    }

    if(jud()){
        cout << "Yes" << endl;
        return;
    }
    // 180
    memset(nmp , ' ' , sizeof nmp);
    change2();

    if(jud()){
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
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

