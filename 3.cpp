#include <iostream>
void stringchet(int x);

int main() {
    int a;
    std::cout << "Введите число" ;
    std::cin >> a;
    stringchet(a);
    return 0;
}
void stringchet(int x) {
    std::string result;
    for (int i = 0; i <= x; i += 2) {
        if (!result.empty()) result += " ";
        result += std::to_string(i);
    }
    std::cout << result << std::endl;
}
