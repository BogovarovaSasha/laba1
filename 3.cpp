#include <iostream>
using namespace std;

void stringchet(int x);

int main() {
    int a;
    
    cout << "Введите число: ";
    while (!(cin >> a)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    stringchet(a);
    return 0;
}

void stringchet(int x) {
    string result;
    for (int i = 0; i <= x; i += 2) {
        if (!result.empty()) result += " ";
        result += to_string(i);
    }
    cout << result << endl;
}
