#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {-4, 7, 11, -2, 8, 170, 0, 11};
    int smallest = arr[0];

    for(int i = 1; i < 8; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest;

    return 0;

}