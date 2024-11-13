#include<bits/stdc++.h>
using namespace std;
// pair<long, long> countOccurrences(string &binaryString) {
//     long count01 = 0, count10 = 0;
//     for (string::size_type i = 0; i < binaryString.length() - 1; ++i) {
//         if (binaryString[i] == '0' && binaryString[i+1] == '1') {
//             ++count01;
//         } else if (binaryString[i] == '1' && binaryString[i+1] == '0') {
//             ++count10;
//         }
//     }
//     return {count01, count10};
// }
long int hammingDistance(const string &str1, const string &str2) {
    

    long int distance = 0;
    for (string::size_type i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            distance++;
        }
    }

    return distance;
}
string minimizeTransitions10(string &binaryString) {
    long count0 = count(binaryString.begin(), binaryString.end(), '0');
    long count1 = binaryString.length() - count0;
    string minimizedString(count1, '1');
    minimizedString += string(count0, '0');
    return minimizedString;
}
string minimizeTransitions01(string &binaryString) {
    long count0 = count(binaryString.begin(), binaryString.end(), '0');
    long count1 = binaryString.length() - count0;
    string minimizedString(count0, '0');
    minimizedString += string(count1, '1');
    return minimizedString;
}
bool isValidBinaryString(string &binaryString) {
    for (char ch : binaryString) {
        if (ch != '0' && ch != '1') {
            return false;  
        }
    }
    return true;
}
void solve(int numberOfTestCases){
    string binaryString;
    cin >> binaryString;
    int a,b;
    cin>>a>>b;
    if(!isValidBinaryString(binaryString)){
      	if(numberOfTestCases==0){
      		cout << "INVALID";
      	return;
    	}
        cout << "INVALID" << endl;
        return;
    }
  string minimizedString;
  	if(a<b){
      minimizedString = minimizeTransitions01(binaryString);
    }
  else{
    minimizedString = minimizeTransitions10(binaryString);
  }
 long res = hammingDistance(binaryString, minimizedString);
    // pair<long, long> occurrences = countOccurrences(minimizedString);
  	if(numberOfTestCases==0){
    //   cout<<occurrences.first*a+occurrences.second*b;
    cout<<res;
      return;
    }
  
    // cout<<occurrences.first*a+occurrences.second*b<<endl;
    cout<<res<<endl;
}
int main(){
    int numberOfTestCases;
    cin>>numberOfTestCases;
    while(numberOfTestCases--){
        solve(numberOfTestCases);
    }
    return 0;
}
