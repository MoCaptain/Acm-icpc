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
#include <unordered_map>

using namespace std;

#define int long long
#define endl "\n"
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
void solve(){

    int n;
    cin >> n;
    string h,m;
    cin >> h >> m;
    if(m.size() == 1){
        m = '0' + m;
    }
    set<string> r1,r2,r3;
    for(int i = 1; i <= n ; i ++){
        string id,s1,s2;
        cin >> id;
        cin >> s1;
        string tmp1 = "";
        tmp1 += s1[0];
        tmp1 += s1[1];
        tmp1 += s1[2];
        tmp1 += s1[3];
        string tmp2 = "";
        tmp2 += s1[5];
        tmp2 += s1[6];

        cin >> s2;
        string sh = "";
        sh += s2[0];
        sh += s2[1];
        int hour = stoi(sh);
        string sm = "";
        sm += s2[3];
        sm += s2[4];
        int min = stoi(sm);
        string ss = "";
        ss += s2[6];
        ss += s2[7];
        int sec = stoi(ss);
        int sum = hour * 3600 + min * 60 + sec;
//1h = 3600s
        //25200 - 32400   64800 - 72000  通勤
        //39600 - 46800 午休
        //79200 - 86399  0 - 3600 临睡
        if(h == tmp1 && m == tmp2){
            if((sum >= 25200 && sum <= 32400) || (sum >= 64800 && sum <= 72000)){
                r1.insert(id);
            }
            if((sum >= 79200 && sum <= 86399) || (sum >= 0 && sum <= 3600)){
                r3.insert(id);
            }
            if(sum >= 39600 && sum <= 46800){
                r2.insert(id);
            }
        }
    }

    cout << r1.size() << ' ' << r2.size() << ' ' << r3.size() << endl;

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

