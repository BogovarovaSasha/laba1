/*Модуль числа.
Дана сигнатура функции: int abs (int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
модуль числа х (если оно было положительным, то таким и остается, если он
было отрицательным – то необходимо вернуть его без знака минус).*/
#include <iostream>
using namespace std;

int abs(int x) {
    if (x < 0) {
        return x * (-1);
    }
    return x;
}

int main() {
    int num;
    
    cout << "Введите целое число: ";
    while (!(cin >> num)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    int result = abs(num);
    cout << "Модуль числа: " << result << endl;
    
    return 0;
}