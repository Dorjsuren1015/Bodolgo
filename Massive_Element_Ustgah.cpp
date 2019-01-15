#include <iostream>
using namespace std;

int main() {
	
	int n, a;
	
	cin >> n;
	
	int array[n];
	
	for (int i=0; i < n; i++){
		cin >> array[i];
	}
	
	cin >> a;
	

	
	for (int i=a-1; i < n; i++){
		array[i] = array[i+1];
	}
	
	for (int i=0; i < n-1; i++){
		cout << array[i] << " ";
	}
	


	return 0;
}
