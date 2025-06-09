// Given an array arr, rotate the array by one position in clockwise direction.
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr)
{
    int n = arr.size();

    // store the last element in a variable

    int lastElement = arr[n - 1];

    // assign every value by its predecessor

    for (int i = n - 2; i >= 0; i--)
    {

        arr[i + 1] = arr[i];
    }

    arr[0] = lastElement;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5 };

    rotate(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ';

    return 0;
}

// int main() {
//     int arr[8] = {2, 3, 7, -4, -11, 8, 13, 12};
//                 // {12, 2, 3, 7, -4, -11, 8, 13};
//     int num = arr[7];

//     for(int i = 6; i >= 0; i--) {
//         arr[i+1] = arr[i];
//     }
//     arr[0] = num;

//     // Display
//     for(int i = 0; i < 8; i++){
//         cout<<arr[i]<< " ";
//     }
//     return 0;
// }