#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double sum = 0.0;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= pow(i, -i);
        } else {
            sum += pow(i, -i);
        }
    }
    
    cout << "The sum of the first " << n << " terms is " << sum << endl;
    
    return 0;
}
