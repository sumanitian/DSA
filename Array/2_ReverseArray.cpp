#include<iostream>
using namespace std;

int main() 
{
    int arr[5] = {6, 8, 3, 2, 7};
    for(int i = 4; i >= 0; i--) {
        cout<<arr[i] << " ";
    }
    return 0;
}