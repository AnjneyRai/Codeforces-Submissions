#include <iostream>
 
int main() {
    // Fast I/O for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int a, b;
    std::cin >> a >> b; // Read Limak's and Bob's initial weights
 
    int years = 0; // Counter to keep track of the full years passed
 
    // Loop continues as long as Limak is lighter than or equal to Bob
    while (a <= b) {
        a *= 3;    // Limak's weight triples
        b *= 2;    // Bob's weight doubles
        years++;   // Increment the year counter
    }
 
    // Print the final result
    std::cout << years << "
";
 
    return 0;
}