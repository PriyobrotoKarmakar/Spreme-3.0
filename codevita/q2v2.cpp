#include <bits/stdc++.h>
using namespace std;

long int hammingDistance(const string &str1, const string &str2) {
    long int distance = 0;
    for (string::size_type i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            distance++;
        }
    }
    return distance;
}

string minimizeTransitions10(long count0, long count1) {
    return string(count1, '1') + string(count0, '0');
}

string minimizeTransitions01(long count0, long count1) {
    return string(count0, '0') + string(count1, '1');
}

bool isValidBinaryString(const string &binaryString) {
    return all_of(binaryString.begin(), binaryString.end(), [](char ch) {
        return ch == '0' || ch == '1';
    });
}

void solve(int numberOfTestCases) {
    string binaryString;
    cin >> binaryString;
    long a, b;
    cin >> a >> b;

    if (!isValidBinaryString(binaryString)) {
        cout << "INVALID";
        if (numberOfTestCases != 0) cout << endl;
        return;
    }

    long count0 = count(binaryString.begin(), binaryString.end(), '0');
    long count1 = binaryString.length() - count0;

    string minimizedString = (a < b) ? minimizeTransitions01(count0, count1) : minimizeTransitions10(count0, count1);
    long int res = hammingDistance(binaryString, minimizedString);

    cout << res;
    if (numberOfTestCases != 0) cout << endl;
}

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while (numberOfTestCases--) {
        solve(numberOfTestCases);
    }
    return 0;
}
