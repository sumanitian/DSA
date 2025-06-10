
// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<iostream>
using namespace std;

int main() {
    int arr[4] = {1,3,3,1};
    int count[4] = {0};

    for(int i = 0; i < 4; i++){
        int index = arr[i];
        count[index]++;
    }

    for(int i = 0; i < 4; i++){
        if(count[i]>1){
            cout<<i<<" ";
        }
    }
}