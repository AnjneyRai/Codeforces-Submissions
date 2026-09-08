#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    
    // Perform the wrong subtraction algorithm k times
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n /= 10; // If the last digit is 0, remove it by dividing by 10
        } else {
            n -= 1;  // Otherwise, decrease the number by 1
        }
    }
    
    cout << n << '
';
    return 0;
}