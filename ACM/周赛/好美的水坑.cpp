#include <iostream>
#include <queue>
using namespace std;
int n,m;
char mp[110][100];
int res;
struct node{
	int x;
	int y;
};
bool vis[110][110];
int dx[8] = {0,0,1,-1,-1,1,-1,1};
int dy[8] = {1,-1,0,0,-1,-1,1,1};
void bfs(int x,int y){
	queue<node> q;
	vis[x][y] = true;
	q.push({x,y});
	while(!q.empty()){
		node tp = q.front();
		q.pop();
		for(int i = 0 ; i < 8; i ++){
			int nx = tp.x + dx[i];
			int ny = tp.y + dy[i];

			if(vis[nx][ny])continue;
			if(nx < 1 || ny < 1 || nx > n || ny > m || mp[nx][ny] == '.')continue;

			vis[nx][ny] = true;
			mp[nx][ny] = '.';
			q.push({nx,ny});
		}

	}
}
int main(){
	cin >> n >> m;

	for(int i = 1; i <= n ; i ++){
		for(int j = 1; j <= m ; j ++){
			cin >> mp[i][j];
			vis[i][j] = false;
		}
	}

	res = 0;
	for(int i = 1; i <= n ; i ++){
		for(int j = 1; j <= m ; j ++){
			if(mp[i][j] == '.'|| vis[i][j])continue;
			res++;
			bfs(i,j);
		}
	}
	cout << res << endl;
	return 0;
}