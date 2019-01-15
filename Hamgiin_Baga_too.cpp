#include <iostream>
using namespace std;

int main() {
	
	
	int n, a, b;
	
	cin >> n;
	
	cin >> b;
	
	for (int i=1; i<n; i++){
		
		cin >> a;
		
		if (a <= b){
			b = a;
		}
		
	}
	
	cout << b << endl;

	return 0;
}
