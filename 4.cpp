#include <iostream>
#include <vector>

int maxAbs(std::vector<int> arr) {
    int max = arr[0];
    for (int x : arr)
        if (abs(x) > abs(max))
            max = x;
    return max;
}

int main() {
    std::vector<int> arr = {1,-2,-7,4,2,2,5};
    std::cout << maxAbs(arr);
}