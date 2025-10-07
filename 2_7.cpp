/*Двойная сумма.
Дана сигнатура функции: int sum2 (int x, int y);
Необходимо реализовать функцию таким образом, чтобы она возвращала
сумму чисел x и y. Однако, если сумма попадает в диапазон от 10 до 19, то надо
вернуть число 20.*/
#include <iostream>
using namespace std;

int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

int main() {
    int x, y;
    
    cout << "Введите первое число:";
    while (!(cin >> x)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    cout << "введите Второе число: ";
    while (!(cin >> y)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    int result = sum2(x, y);
    cout << result << endl;

    return 0;
}