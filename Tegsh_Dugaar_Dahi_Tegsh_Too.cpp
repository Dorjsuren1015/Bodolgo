#include <iostream>
using namespace std;

int main() {
	
	int n, a=0;
	
	cin >> n;
	
	int array [n];
		
	for (int i=1; i<=n; i++){
		
		cin >> array[i];
		
		if ( i%2 == 0 && array[i]%2 == 0 ){
			
			a++;
		}
		
	}
	
	cout << a << endl;

	return 0;
}
