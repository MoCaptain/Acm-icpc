#include <iostream>
#include <queue>
using namespace std;
char mp[1010][1010];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
struct node{
	int x;
	int y;
};
int r,c;
void bfs(int x,int y){
	node temp;
	temp.x = x;
	temp.y = y;
	queue<node> q;
	q.push(temp);
	mp[x][y] = '.';	
	while(!q.empty()){
		node tp = q.front();
		q.pop();

		for(int i = 0 ; i < 4; i ++){
			int nx = tp.x + dx[i];
			int ny = tp.y + dy[i];
			if(nx <= 0 || ny <= 0 || nx > r || ny > c || mp[nx][ny] == '.')continue;
			mp[nx][ny] = '.';
			q.push({nx,ny});
		}

	}
}

bool check(int x,int y){
	int cnt = 0;
	if(mp[x][y] == '#')cnt++;
	if(mp[x + 1][y] == '#')cnt++;
	if(mp[x][y + 1] == '#')cnt++;
	if(mp[x + 1][y + 1] == '#')cnt++;

	if(cnt == 3)return true;
	else return false;
}

int main(){

	cin >> r >> c;

	for(int i = 1; i <= r ; i ++){
		for(int j = 1; j <= c; j ++){
			cin >> mp[i][j];
		}
	}

	for(int i = 1; i <= r ; i ++){
		for(int j = 1; j <= c; j ++){
			if(check(i,j)){
				cout << "Bad placement." << endl;
				return 0;
			}
		}
	}

	int res = 0;

	for(int i = 1; i <= r; i ++){
		for(int j = 1; j <= c; j ++){
			if(mp[i][j] == '#'){
				res++;
				bfs(i,j);
			}
		}
	}


	cout << "There are " << res << " ships." << endl;
	return 0;
}