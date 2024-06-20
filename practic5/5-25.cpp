#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите размер массива N: ";
    cin >> N;

    double arr[N];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    //Минимальный элемент массива: Для нахождения минимального элемента в массиве, пройдемся по всем элементам и будем обновлять значение минимума при необходимости.
    double minElement = arr[0];
    for (int i = 1; i < N; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Минимальный элемент массива: " << minElement << endl;


    // Сумма элементов до первого положительного элемента: Пройдемся по массиву и найдем первый положительный элемент. Затем просуммируем все элементы до него.

    double sumBeforePositive = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] > 0) {
            break; // Нашли первый положительный элемент
        }
        sumBeforePositive += arr[i];
    }

    cout << "Сумма элементов до первого положительного элемента: " << sumBeforePositive << endl;

    // Сжатие массива и заполнение нулями: Введите значения интервала [a, b] и удалим элементы, модуль которых находится в этом интервале. Затем заполним освободившиеся места нулями. 

    double a, b;
    cout << "Введите значения a и b: ";
    cin >> a >> b;

    int newSize = 0;
    for (int i = 0; i < N; ++i) {
        if (abs(arr[i]) < a || abs(arr[i]) > b) {
            arr[newSize] = arr[i];
            ++newSize;
        }
    }

    // Заполняем оставшиеся элементы нулями
    for (int i = newSize; i < N; ++i) {
        arr[i] = 0;
    }

    cout << "Сжатый массив:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
