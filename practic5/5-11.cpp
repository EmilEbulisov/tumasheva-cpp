#include <iostream>
#include <cmath>
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
    //Для нахождения номера минимального по модулю элемента в массиве, пройдемся по всем элементам и найдем тот, у которого модуль наименьший.
    int minIndex = 0;
    double minAbsValue = abs(arr[0]);
    for (int i = 1; i < N; ++i) {
        if (abs(arr[i]) < minAbsValue) {
            minAbsValue = abs(arr[i]);
            minIndex = i;
        }
    }

    cout << "Номер минимального по модулю элемента: " << minIndex + 1 << endl;

    // Сумма модулей элементов после первого отрицательного элемента: Пройдемся по массиву и найдем первый отрицательный элемент. Затем просуммируем модули всех элементов, следующих за ним

    int firstNegativeIndex = -1;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            firstNegativeIndex = i;
            break;
        }
    }

    double sumAfterNegative = 0;
    for (int i = firstNegativeIndex + 1; i < N; ++i) {
        sumAfterNegative += abs(arr[i]);
    }

    cout << "Сумма модулей элементов после первого отрицательного: " << sumAfterNegative << endl;


 // Сжатие массива и заполнение нулями: Введите значения интервала [a, b] и удалим элементы, величина которых находится в этом интервале. Затем заполним освободившиеся места нулями. 

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
