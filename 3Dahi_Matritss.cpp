#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	int array[n][n], array1[n][n];
	
	for (int i=0; i < n; i++) {
		
		for (int j=0; j < n; j++) {
			
			cin >> array[i][j];
		}
	}
	
	for (int i=0; i < n; i++) {
		
		for (int j=0; j < n; j++) {
			
			cin >> array1[i][j];
		}
	}
	
	for (int i=0; i < n; i++) {
		
		for (int j=0; j < n; j++) {
			
			array[i][j] = array[i][j] + array1[i][j]; 
			
			cout << array[i][j] << " ";
			
		}
		
		cout << "\n";
	}
	
	
	
	

	return 0;
}
