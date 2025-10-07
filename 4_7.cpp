/*Возвратный реверс.
Дана сигнатура функции: int * reverseBack (int arr[]);
Необходимо реализовать функцию таким образом, чтобы она возвращала новый
массив, в котором значения массива arr записаны задом наперед.*/
#include <iostream>
using namespace std;

int* reverseBack(int arr[], int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[size - 1 - i];
    }
    return newArr;
}

int main() {
    int size;
    
    cout << "Введите размер массива: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Введите элементы: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Исходный: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int* reversed = reverseBack(arr, size);
    
    cout << "Реверс: ";
    for (int i = 0; i < size; i++) {
        cout << reversed[i] << " ";
    }

    return 0;
}  