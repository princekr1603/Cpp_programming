#include <iostream>
using namespace std;
int main(){
    int arr[] = {26, 23, 17, 0, 34, 54, 65, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sorted[n];
    for (int i = 0; i < n; i++){
        sorted[i] = arr[i];
    }
    for (int i= 1;i<n;i*=2){
        for (int left = 0;left<n-1;left+=2*i){
            int mid = left + i- 1;
            int right = min(left + 2 *i-1,n-1);
            int temp[right - left + 1];
            int indx1 = left;
            int indx2 = mid + 1;
            int i = 0;
            for(;indx1 <= mid && indx2 <= right; i++){
                temp[i] = (sorted[indx1] < sorted[indx2]) ? sorted[indx1++] : sorted[indx2++];
            }
            for(;indx1 <= mid; i++){
                temp[i] = sorted[indx1++];
            }
            for(;indx2 <= right; i++){
                temp[i] = sorted[indx2++];
            }
            for(int k = 0; k < i; k++){
                sorted[left + k] = temp[k];
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << sorted[i] << " ";
    }

    return 0;
}

