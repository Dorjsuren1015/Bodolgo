#include <iostream>
using namespace std;

int main() {
	
	int a, b, s = 0, n = 0;
	
	cin >> a >> b;
	
	int i = b;
	
	for ( ; i<=a; i++){
		
		int temp=i;
		
		while (temp > 0){
			s=s + temp%10;
			temp = temp/10;
		}
		
		if ( s%b == 0 )
		{
			n++;
		}
		
		s = 0;
	}
	
	cout << n << endl; 
	
	return 0;
}
