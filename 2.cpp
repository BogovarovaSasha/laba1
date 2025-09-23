#include <iostream>
using namespace std;
void boolis35(int x);

void boolis35(int x) {
    if ( x % 3 == 0 && x % 5 == 0) {
        std::cout << "False"<< std::endl;
    }
    else if ( x % 3 == 0 || x % 5 == 0 ) {
        std::cout << "True"<< std::endl;
    }
    else {
        std::cout << "False"<< std::endl;
    }
}

int main() {
    int a;
    
    cout << "Введите число: ";
    while (!(cin >> a)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    boolis35(a);
    return 0;
}
