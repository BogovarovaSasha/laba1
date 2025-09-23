#include <iostream>
void boolis35(int x);

int main() {
    int a;
    std::cout << "Введите число" ;
    std::cin >> a;
    boolis35(a);
    return 0;
}
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
