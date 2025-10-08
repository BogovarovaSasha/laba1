/*Все вхождения.
Дана сигнатура функции: int * findAll (int arr[], int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала новый
массив, в котором записаны индексы всех вхождений числа x в массив arr.*/
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    int arr[size];
    cout << "Введите " << size << " чисел: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "Введите число для поиска: ";
    cin >> x;
    
    cout << "Индексы: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << i << " ";
    }
}
    
    return 0;
}