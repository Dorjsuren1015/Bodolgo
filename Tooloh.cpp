#include <iostream>
using namespace std;

int main() {
	
	int n, s, n1 = 1;
	bool a = false;
	cin >> n;
	
	while (!a){
		cin >> s;
		a = s == n;
		n = s;
		n1++;
	}

	
	cout << n1 << endl;

	return 0;
}
