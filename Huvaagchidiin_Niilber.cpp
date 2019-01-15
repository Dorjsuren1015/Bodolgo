#include <iostream>
using namespace std;

int main() {
	
	int n, s = 0, k = 1, a;
	
	cin >> n;
	
	for (int i=1; i <= n; i++){
		
		for (int j=1; j <= i; j++){
			
			if ( i%j == 0 ){
				
				s = s + j;
				
			}
		}
		
		if ( s >= k ){
			
			k = s;
			
			a = i;
		}
		
		s = 0;
	}
	
	cout << a << endl;
	
	return 0;
}
