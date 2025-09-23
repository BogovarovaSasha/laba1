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
    std::vector<int> arr;
    int n;
    
    std::cout << "Введите количество элементов: ";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "Ошибка! Введите положительное число: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout << "Введите " << n << " чисел:" << std::endl;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Элемент " << (i + 1) << ": ";
        
        while (!(std::cin >> num)) {
            std::cout << "Ошибка! Введите число: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        arr.push_back(num);
    }
    
    std::cout << "Результат: " << maxAbs(arr) << std::endl;
    
    return 0;
}
