#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Prime numbers in the array are: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= 1)
            continue;
        bool is_prime = true;
        for (int j = 2; j <= sqrt(arr[i]); ++j) {
            if (arr[i] % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
