#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		vector<int> vec(n);
		map<int,int> mp;
		for(int i = 0; i < n ; i ++){
			cin >> vec[i];
			mp[vec[i]]++;
		}
		sort(vec.begin() , vec.end());
		bool vis = false;

		for(int i = 0 ; i < n ; i ++){
			if(vec[i] % vec[0] != 0)vis = true;
		}

		if(mp[vec[0]] == 1 || vis){
			cout << "YES" << endl;
			continue;
		}

		cout << "NO" << endl;

	}
	return 0;
}