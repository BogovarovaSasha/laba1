#include<iostream>
using namespace std;

bool isEqual(int a, int b, int c) {
    return (a == b && b == c); 
}

int main(){
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
    
    if (isEqual(a, b, c)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}