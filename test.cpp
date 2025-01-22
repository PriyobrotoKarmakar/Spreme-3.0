#include <iostream>
using namespace std;

int needCommas(int num) {
    if (num < 1000) {
        return 0;
    }
    int digits = 0;
    while (num > 0) {
        digits++;
        num /= 10;
    }
    return (digits - 1) / 3;
}

int findCommas(int N) {
    int totalCommas = 0;
    for (int i = 1; i <= N; ++i) {
        totalCommas += needCommas(i);
    }
    return totalCommas;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Total commas used from 1 to " << N << " are: " << findCommas(N) << endl;
    return 0;
}
