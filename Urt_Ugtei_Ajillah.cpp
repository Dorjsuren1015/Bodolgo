#include <iostream>
using namespace std;

int main() {
	
	int n, too;
	
	cin >> n;
	
	string ug;
	
	for (int i=0; i < n; i++) {
		
		cin >> ug;
		
		too = ug.size();
		
		if (too > 10) {
			
			cout << ug[0] << too - 2 << ug[too-1] << "\n";
			
		} else {
			
			cout << ug << "\n";
		}
		
	}

	return 0;
}
