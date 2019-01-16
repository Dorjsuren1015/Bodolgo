#include <iostream>
using namespace std;

int main() {
	
	int n, a=0, b=0;
	
	cin >> n;
	
	int array[n][n];
	
	for (int i=0; i < n; i++) {
		
		for (int j=0; j < n; j++) {
			
			cin >> array[i][j];
		}
	}
	
	for (int i=0; i < n; i++) {
		
		for (int j=i; j < n; j++) {
					
			a = a + array[i][j];
			
			b = b+ array[i][n-j-1];
						
			j = n;
		}
	}
	
	cout << a << " " << b << endl;
	

	
	
	

	return 0;
}
