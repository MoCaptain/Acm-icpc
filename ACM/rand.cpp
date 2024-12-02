#include <iostream>
#include <random>  
#include <chrono>
using namespace std;

int main(){
	
	mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
	uniform_int_distribution<int> rd(1, 54);

	for(int i = 1; i <= 1; i ++){
		int res = rd(rng); 
		cout << res << ' ';
	}

	return 0;
}