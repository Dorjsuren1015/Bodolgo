#include <iostream>
using namespace std;

int main() {
	
	int n, i, j;
	
	bool isequal = false;
	
	cin >> n;
	
	int array[n];
	
	for (i=0; i < n; i++) {
		
		cin >> array[i];	
		
	}
	
	for (i=0; i < n && isequal == false; i++) {
		
		for (j=i+1; j < n && isequal == false; j++) {
			
			isequal = array[i] == array[j];
			
		}
	}
	
	isequal ? cout << i << " " << j :  cout << 0 << " " << 0; cout << endl;

	return 0;
}
