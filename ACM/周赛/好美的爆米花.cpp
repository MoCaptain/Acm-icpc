#include <iostream>
#include <string>
using namespace std;

string s[15];
int a[15];
bool vis[15];
int n,m;
int res;
void dfs(int cnt , int num ){
	if(num == ((1 << m) - 1)){
		res = min(res,cnt);
		return;
	}

	for(int i = 1; i <= n ; i ++){
		if(vis[i])continue;
		vis[i] = true;
		//cout << (num | a[i]) << '  ' << a[i] << endl;
		dfs(cnt + 1, num | a[i]);
		vis[i] = false;
	}

}
int ct(string str){
	int len = str.size();
	int cnt = 0;
	int num = 0;
	for(int i = len - 1; i >= 0; i --){
		if(str[i] == 'x'){
			cnt++;
			continue;
		}
		int temp = 1;
		for(int j = 1; j <= cnt ; j ++){
			temp *= 2;
		}
		num += temp;
		cnt++;
	}

	return num;
}
int main(){
	res = 1e9;
	cin >> n >> m;
	for(int i = 1; i <= n ; i ++){
		cin >> s[i];
		a[i] = ct(s[i]);
		vis[i] = false;
	}


	dfs(0,0);

	cout << res << endl;
	return 0;
}