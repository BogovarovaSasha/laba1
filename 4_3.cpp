/*Поиск максимального.
Дана сигнатура функции: int maxAbs (int arr[]);
Необходимо реализовать функцию таким образом, чтобы она возвращала
наибольшее по модулю (то есть без учета знака) значение массива arr.
*/

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
    
    std::cout << "введите количество элементов:";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "ошибка! введите число:";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout << "введите " << n << " чисел:" << std::endl;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Элемент" << (i + 1) << ": ";
        
        while (!(std::cin >> num)) {
            std::cout << "Ошибка! Введите число:";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        arr.push_back(num);
    }
    
    std::cout << "Результат:" << maxAbs(arr) << std::endl;
    
    return 0;
}