#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        
        sum = n*(n+1)/2;
        
        int arr_sum = 0;
        
        for(int i=0; i < n; i++){
            arr_sum = arr_sum + arr[i];
        }
        
        return sum - arr_sum;
    }

int main() {
    vector<int> arr = {9,6,4,2,3,5,7,0,1};  
    cout << missingNum(arr);  
    return 0;
}