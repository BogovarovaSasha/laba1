/*Тройной максимум.
Дана сигнатура функции: int max3 (int x, int y, int z);
Необходимо реализовать функцию таким образом, чтобы она возвращала
максимальное из трех полученных функцией чисел. Подсказка: идеальное
решение включает всего две инструкции if и не содержит вложенных if.*/
#include <iostream>
using namespace std;

int max3(int x, int y, int z) {
    int max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}

int main() {
    int a, b, c;
    
    cout << "Введите первое число: ";
    cin >> a;
    while (cin.fail()) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> a;
    }
    
    cout << "Введите второе число: ";
    cin >> b;
    while (cin.fail()) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> b;
    }
    
    cout << "Введите третье число: ";
    cin >> c;
    while (cin.fail()) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> c;
    }

    cout << "Максимум: " << max3(a, b, c);
    return 0;
}