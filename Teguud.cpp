#include <iostream>
using namespace std;

int main() {
	
	int x, y, i, j;
	
	cin >> x >> y;
	
	bool isequal = false;
	
	int array[x][y];

	for (i=0; i < x; i++) {
		
		for (j=0; j < y; j++) {
			
			cin >> array[i][j];
		}
		
	}
	
	for (i=0; i < x && isequal == false; i++) {
		
		for (j=0; j < y && isequal == false; j++) {
			
			isequal = array[i][j] == 0;
			
		}
		
	}
	
	cout << i << " " << j << endl;
	
	

	return 0;
}
