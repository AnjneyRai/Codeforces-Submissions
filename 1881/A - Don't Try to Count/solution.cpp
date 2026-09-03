#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    string x, s;
    cin >> x >> s;
    
    int operations = 0;
    
    // Loop up to 6 times because x grows exponentially (2^6 = 64 times its original size)
    for (int i = 0; i <= 6; i++) {
        // Check if 's' exists inside 'x'
        if (x.find(s) != string::npos) {
            cout << operations << "
";
            return;
        }
        // Shorthand to append x to itself (double its size)
        x += x; 
        operations++;
    }
    
    // If not found after 6 doublings, it's impossible
    cout << -1 << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}