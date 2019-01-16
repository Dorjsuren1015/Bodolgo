#include <iostream>
using namespace std;

int main() {
	
	int a, b, n;
	
	int array[400];
		
	int i=0, j=1;
	
	while (true) {
		
		cin >> array[i] >> array[j]; 
		
		if (array[i] == -1 && array[j] == -1 ) {
			
			break;
		}
		i = j + 1;
		
		j = j + 2;
		
	}
	
	for (i=0; i < j - 1; i = i + 2) {
		
			
			if (array[i] > array[i+1]) {
					
				if (array[i] - array[i+1] > (99 - array[i]) + array[i+1] + 1) {
						
					cout << (99 - array[i]) + array[i+1] + 1 << "\n";
			}
				
				else {
						
					cout << array[i] - array[i+1] << "\n";
				}
			}
		
			else {
						
				if (array[i+1] - array[i] > (99 - array[i+1]) + array[i] + 1) {
							
					cout << (99 - array[i+1]) + array[i] + 1 << "\n";
				}
						
				else {
						
					cout << array[i+1] - array[i] << "\n";
				}
							
			}

	}
	
	return 0;
}
