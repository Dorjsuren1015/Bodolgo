#include <iostream>
using namespace std;

int main() {
	
	char array[26] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z'};
	
	char array1[26] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	
	char array2[6]  = {'A','O','E','Y','U','I'};
	
	char array3[6]  = {'a','o', 'e','y', 'u','i'};
	

	

	
	string utga;
	
	cin >> utga;
	
	int too = utga.size();
	
	for (int i=0; i < too; i++) {
		
		for (int j=0; j < 26; j++) {
			
			if (utga[i] == array[j]) {
				
				cout << "." << array1[j];
				
			}
			
			if (utga[i] == array1[j]) {
				
				cout << "." << array1[j];
			}
			
		
		}
		
		for (int j = 0; j < 6; j++) {
			
			if (utga[i] == array2[j]) {
				
				
			}
			
			if (utga[i] == array3[j]) {
				
				
			}
		}
		
	}

	return 0;
}
