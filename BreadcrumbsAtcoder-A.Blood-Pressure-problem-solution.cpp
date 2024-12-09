#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate mean arterial pressure
    double C = (A - B) / 3.0 + B;

    // Print the result with 7 decimal places
    cout << fixed << setprecision(7) << C << endl;

    return 0;
}
