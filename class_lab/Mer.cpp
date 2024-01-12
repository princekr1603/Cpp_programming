#include <iostream>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= high){
        if (a[i] < a[j]){
            temp[k] = a[i];
            k++;
            i++;
        }
        else{
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid){
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= high){
        temp[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++){
        a[i] = temp[i-low];
    }
}
void MergeSort(int *a, int low, int high){
    int mid;
    if (low < high){
        mid=(low+high)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        Merge(a, low, high, mid);
    }
}

int main(){
    int arr[]={36,25,40,15,80,52,65};
    MergeSort(arr, 0, 6);
    cout<<"\nSorted Data ";
    for (int i = 0; i < 7; i++)
    cout<<" "<<arr[i];
    return 0;

}
