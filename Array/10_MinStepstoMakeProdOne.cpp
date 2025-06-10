#include <iostream>
#include <vector>
using namespace std;

int makeProductOne(int arr[], int N) {
    int count_zero = 0;
    int step = 0;
    int mul = 1;
        
    for(int i = 0; i < N; i++) {
        if(arr[i] > 0) {
            step = step + (arr[i] - 1);
            mul = mul * 1;
        }
        else if(arr[i] < 0) {
            step = step + (-1 - arr[i]);
            mul = mul * -1;
        }
        else {
            step = step + 1;
            count_zero++;
        }
    }
    if(mul == 1 || count_zero > 0){
        return step;
    }
    else {
        return step+2;
    }
}


int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int arr[N];
    cout << "Enter " << N << " elements: ";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = makeProductOne(arr, N);
    cout << "Minimum steps to make product equal to 1: " << result << endl;

    return 0;
}