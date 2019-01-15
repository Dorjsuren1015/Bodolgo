#include <iostream>
using namespace std;

int main() {
	
	string input;

    cin >> input;

    bool isequal=false;

    int size = input.size(), n=0;

    for (int i=1; i < size - 1; i++) {

        if (input[i] != ',') {

            for (int j=i+1; j < size - 1 && isequal==false; j++) {
            
            isequal = input[i] == input[j];


            }

            if (!isequal) { n++;}

            isequal = false;   

        }
        
    }

    cout << n << endl;

	return 0;
}