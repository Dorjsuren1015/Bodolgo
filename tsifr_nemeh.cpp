#include <iostream>
#include <vector>

using namespace std;
 
long long calc(long long n){
    if (n < 10)
        return n;

    return calc(n%10 + calc(n / 10));    
}
int main() {

    long long n;

    while(true){
        cin >> n;
        if (n == 0)
            exit(0);
        cout << calc(n) << endl;
    }

	return 0;
}