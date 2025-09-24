/*Двузначное.
Дана сигнатура функции: bool is2Digits (int x);
Необходимо реализовать функцию таким образом, чтобы она принимала число
x и возвращала true, если оно двузначное. */
#include <iostream>
using namespace std;

void boolis2Digits(int x) {
    int num = x;
    if (num < 0) {
        num = -num;
    }

    if (num >= 10 && num < 100) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    } 
}

int main() {
    int x;
    
    cout << "Введите число: ";
    while (!(cin >> x)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    boolis2Digits(x);
    return 0;
}