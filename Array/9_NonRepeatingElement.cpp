#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int firstNonRepeating(vector<int>& arr){
    // int n = arr.size();
    // int j;

    // for(int i = 0; i < n; i++) {
        
    //     for (j = 0; j < n; j++) {
    //         if(i == j) {
    //             continue;
    //         }
    //         if(arr[i] == arr[j] && i != j){
    //             break;
    //         }
    //     }
    //     if(j == n){
    //         return arr[i];
    //     }
    // }
    // return 0;
    int n = arr.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
             mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp[arr[i]] == 1) {
                return arr[i];
            }
        }
        return 0;
}


int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = firstNonRepeating(arr);
    if (result != -1)
        cout << "First non-repeating element is: " << result << endl;
    else
        cout << "No non-repeating element found." << endl;

    return 0;


}