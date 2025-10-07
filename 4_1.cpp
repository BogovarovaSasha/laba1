/* Поиск первого значения.
Дана сигнатура функции: int findFirst (int arr[], int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала индекс
первого вхождения числа x в массив arr. Если число не входит в массив –
возвращается -1.*/
#include <iostream>
using namespace std;

int findFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int main() {
    int size;
    
    cout << "Введите размер массива: ";
    while (!(cin >> size)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    } 
    
    int* arr = new int[size];
    int x;
    
    cout << "Введите " << size << " чисел массива: ";
    for (int i = 0; i < size; i++) {
        while (!(cin >> arr[i])) {
            cout << "Ошибка! Введите число: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    
    cout << "Введите число для поиска: ";
    while (!(cin >> x)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    int result = findFirst(arr, size, x);
    cout << "Индекс первого вхождения: " << result << endl;
    
    return 0;
}