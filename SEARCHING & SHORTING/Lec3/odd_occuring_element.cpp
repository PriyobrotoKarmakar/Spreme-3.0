#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int singleNonDuplicate(vector<int>& arr) {
        int size = arr.size();
        int s = 0;
        int e = size - 1;
        while (s <= e) {
            int mid = s + ((e - s)/2);
            cout<<"mid: "<<mid<<endl;
            // 1. single element
            if (s == e) {
                return arr[s];
            }
            // valid index
            int curr = arr[mid];
            cout<<"curr: "<<curr<<endl;
            int left = -1;
            if ((mid - 1) >= 0) {
                left = arr[mid - 1];
            }
            cout<<"left: "<<left<<endl;
            int right = -1;
            if ((mid + 1) < size) {
                right = arr[mid + 1];
            }
            cout<<"right: "<<right<<endl;
            // 2. odd element
            if ((curr != left) && (curr != right)) {
                cout<<endl<<"inside case 1: "<<endl;
                return curr;
            }
            // 3.starting element

            if (curr == right && curr!=left) {
                int s_index = mid;
                if ((s_index & 1) == 0) { // part a
                    s = mid + 1;
                } else { // part b
                    e = mid - 1;
                }
            }
            // 4. right element present
            else if (curr == left && curr!=right) {
                int s_index = mid-1;
                if ((s_index & 1) == 0) { // part a
                    s = mid + 1;
                } else { // part b
                    e = mid - 1;
                }
            }
        }
    
        
                    
        
        return -1;
    }

int main(){
    vector<int> arr = {1,1,2,2,3,4,4,8,8};
    cout << singleNonDuplicate(arr) << endl;
    return 0;
}