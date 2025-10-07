/*Квадрат.
Дана сигнатура функции: void square (int x);
Необходимо реализовать функцию таким образом, чтобы она выводила на
экран квадрат из символов ‘*’ размером х, у которого х символов в ряд и х
символов в высоту. */
#include <iostream>
using namespace std;

void square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int x;
    
    cout << "Введите размер квадрата: ";
    while (!(cin >> x)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    square(x);
    
    return 0;
}