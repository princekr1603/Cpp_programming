#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 3, 5, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";        
    }
    cout << endl;
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == target){
            result = mid;
            break;
        } 
        else if (arr[mid] < target){
            left = mid + 1;
        } 
        else{
            right = mid - 1;
        }
    }

    if (result != -1){
        cout << "Element " << target << " found at index " << result << endl;
    } 
    else{
        cout << "Element " << target << " not found in the array" << endl;
    }
    return 0;
}
