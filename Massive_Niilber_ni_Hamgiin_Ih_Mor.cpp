#include <iostream>
using namespace std;

int main() {
	
	int a, b, s=0, n=0, mur;
	
	cin >> a >> b;
	
	int array[a][b];
	
	for (int i=0; i < a; i++) {
		
		for (int j=0; j < b; j++) {
			
			cin >> array[i][j];
		}
	}
	
	for (int i=0; i < a; i++) {
		
		for (int j=0; j < b; j++) {
			
			s = s + array[i][j];
		}
		if (s > n){
			n = s;
			mur = i;
		}
		s=0;
	}
	
	cout << ++mur << endl;
	

	return 0;
}
