#include <iostream>

int charToNum(char x) {
    return x - '0'; 
}

int main() {
    char a; 
    std::cout << "Введите число: ";
    std::cin >> a;
    
    if (a >= '1' && a <= '9') {
        int result = charToNum(a);
        std::cout << "Результат: " << result << std::endl;
    } else {
        std::cout << "Некорректный ввод" << std::endl;
    }
    
    return 0;
}
