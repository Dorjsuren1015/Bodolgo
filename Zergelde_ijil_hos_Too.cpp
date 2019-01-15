#include <iostream>
using namespace std;

int main() {
	
	int n, a=0;
	
	cin >> n;
	
	int array[n];
	
	for (int i=0; i < n; i++) {
		
		cin >> array[i];
	}
	
	int i=0;
	
	for (int j=1; j < n; j++,i++) {
		
		if (array[i] == array[j]) {
			a++;
		}
	}
	cout << a << endl;

	return 0;
}
