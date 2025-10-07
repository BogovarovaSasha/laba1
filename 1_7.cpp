/*Диапазон.
Дана сигнатура функции: bool isInRange (int a, int b, int num);
Функция принимает левую и правую границу (a и b) некоторого числового
диапазона. Необходимо реализовать функцию таким образом, чтобы она
возвращала true, если num входит в указанный диапазон (включая границы).
Обратите внимание, что отношение a и b заранее неизвестно (неясно кто из них
больше, а кто меньше)*/
#include <iostream>
using namespace std;

bool isInRange(int a, int b, int num) {
    return (num >= a && num <= b) || (num >= b && num <= a);
}

int main() {
    int a, b, num;
    
    cout << "Введите границу a: ";
    cin >> a;
    while (!(cin >> a)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cout << "Введите границу b: ";
    cin >> b;
    while (!(cin >> b)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cout << "Введите число: ";
    cin >> num;
    while (!(cin >> num)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    if (isInRange(a, b, num)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}