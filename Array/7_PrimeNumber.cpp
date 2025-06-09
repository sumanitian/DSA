#include<iostream>
using namespace std;

void Prime(int num)
{
    if(num < 2)
    return;

    for(int i = 2; i< num-1; i++) {
        if(num % i == 0) {
            return;
        }
    }

    cout<<num<< " ";
    return;
}
int main() {
    int arr[8] = {2, 3, 7, -4, -11, 8, 13, 12};
    
    for(int i = 0; i < 8; i++) {
        Prime(arr[i]);
    }
    return 0;
}