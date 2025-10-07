/*Числа подряд.
Дана сигнатура функции: String listNums (int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
строку, в которой будут записаны все числа от 0 до x (включительно).*/
#include <iostream>
using namespace std;

void listNums(int x) {
    string result;
    for (int i = 0; i <= x; i += 1) {
        if (!result.empty()) result += " ";
        result += to_string(i);
    }
    cout << result << endl;
}
int main() {
    int a;
    
    cout << "Введите число: ";
    while (!(cin >> a)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    listNums(a);
    return 0;
}
