/*Длина числа.
Дана сигнатура функции: int numLen (long x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
количество знаков в числе x. */
#include <iostream>
using namespace std;

int numLen(long x) {
    int length = 1;
    while (x / 10 != 0) {
        length++;
        x = x / 10;
    }
    return length;
}
int main() {
    long number;
    
    cout << "Введите число: ";
    while (!(cin >> number)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    cout << "Количество знаков: " << numLen(number) << endl;
    
    return 0;
}