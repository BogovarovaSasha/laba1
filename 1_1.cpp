/*Дробная часть.
Дана сигнатура функции: double fraction (double x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
только дробную часть числа х. Подсказка: вещественное число может быть
преобразовано к целому путем отбрасывания дробной части.
*/
#include <iostream>

double fraction(double x) {
    return x - (int)x;
}

int main() {
    double x;
    
    std::cout << "Введите дробное число через точку: ";
    
    while (!(std::cin >> x)) {
        std::cout << "Ошибка! Введите число: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout << "Дробная часть: " << fraction(x) << std::endl;
    
    return 0;
}