#include<iostream>
using namespace std;

int main() {
    int arr[8] = {2, 3, 7, 4, -11, 8, 13, 12};
    
    for(int i = 0; i < 8; i++) {
        // to check number is odd.
        if(arr[i] % 2 == 1 || arr[i] % 2 == -1) {
            cout<<arr[i]<< " ";
        }
    }
    return 0;
}