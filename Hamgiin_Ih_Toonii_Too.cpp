#include <iostream>
using namespace std;

int main() {
	
	int n, too=0, k=0;
	
	cin >> n;
	
	int array[n];
	
	for (int i=0; i < n; i++) {
		
		cin >> array[i];
	}
	
	for (int i=0; i < n; i++) {
		
		for (int j=0; j < n; j++) {
			
			if (array[i] == array[j]) {
				
				too++;
			}
		}
		
		if (too > k) {
			
			k = too;
		}
		
		too = 0;
	}
	
	cout << k << endl;

	return 0;
}
