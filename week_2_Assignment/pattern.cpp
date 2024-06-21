#include <iostream>
using namespace std;

int main() {
    int n=5;
    

    for (int i = 1; i <= n; i++) {
        int r = n - 1;
        int z = n - i + 1;
        
        // First part: Numbers from 1 to n-i+1
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        
        // Second part: '*' characters
        for (int j = n - i + 2; j <= n + i - 2; j++) {
            cout << "* ";
        }
        
        // Third part: Numbers based on the condition
        if (i == 1 || i == 2) {
            for (int j = n + i - 1; j <= 2 * n - 1; j++) {
                cout << r-- << " ";
            }
        } else {
            for (int j = n + i - 1; j <= 2 * n - 1; j++) {
                cout << z-- << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
