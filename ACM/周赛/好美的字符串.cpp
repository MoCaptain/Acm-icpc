#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;

	int res = 0;
	for(int i = 1; s[i] ; i ++){
		if(s[i] == '-')res++;
		else{
			cout << res << ' ';
			res = 0;
		}
	}

	return 0;
}