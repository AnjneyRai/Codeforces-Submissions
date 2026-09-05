#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int count = 0;
        for (int i = 0; i < n; i += k) {        // start of each farm block
            bool hasZero = false;
            for (int j = i; j < i + k; j++) {   // walk through that block only
                if (s[j] == '0') {
                    hasZero = true;
                    break;
                }
            }
            if (!hasZero) count++;
        }
 
        cout << count << "
";
    }
    return 0;
}