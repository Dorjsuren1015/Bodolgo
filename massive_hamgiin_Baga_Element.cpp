#include <iostream>
using namespace std;

int main() {
	
	int x, y;
	
	cin >> x >> y;
	
	int array[x][y];
	
	for (int i=0; i < x; i++) {
		
		for (int j=0; j < y; j++) {
			
			cin >> array[i][j];
		}
	}
	
	
	
	for (int i=0; i < x; i++) {
		
		for (int j=0; j < y; j++) {
			
			if (array[0][0] > array[i][j]){
				
				array[0][0] = array[i][j];
			}
			
		
		}
	}
	
	cout << array[0][0] << endl;
	

	return 0;
}
