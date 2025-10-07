/*День недели.
Дана сигнатура функции: String day (int x);
Функция принимает число x, обозначающее день недели. Необходимо
реализовать функцию таким образом, чтобы она возвращала строку, которая
будет обозначать текущий день недели, где 1 — это понедельник, а 7 –
воскресенье. Если число не от 1 до 7 то верните текст “это не день недели”.
Вместо if в данной задаче используйте switch.*/
#include <iostream>
#include <string>
using namespace std;

string day(int x) {
    switch(x) {
        case 1: return "понедельник";
        case 2: return "вторник";
        case 3: return "среда";
        case 4: return "четверг";
        case 5: return "пятница";
        case 6: return "суббота";
        case 7: return "воскресенье";
        default: return "это не день недели";
    }
}

int main() {
    int x;
    
    cout << "Введите число от 1 до 7: ";
    while (!(cin >> x)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    string result = day(x);
    cout << "Результат: " << result << endl;
    
    return 0;
}