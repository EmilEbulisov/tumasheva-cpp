#include <iostream>
using namespace std;

const int MAX_ROWS = 100; // Максимальное количество строк

int main() {
    int n, m; // Размеры массива (строки и столбцы)
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

    int arr[MAX_ROWS][m]; // Двумерный массив

    // Ввод элементов массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    // Обмен местами строк
    int row1, row2;
    cout << "Введите номера строк для обмена (от 0 до " << n - 1 << "): ";
    cin >> row1 >> row2;

    if (row1 >= 0 && row1 < n && row2 >= 0 && row2 < n) {
        for (int j = 0; j < m; ++j) {
            swap(arr[row1][j], arr[row2][j]);
        }
        cout << "Строки " << row1 << " и " << row2 << " успешно обменялись местами." << endl;
    } else {
        cout << "Некорректные номера строк. Пожалуйста, введите номера от 0 до " << n - 1 << "." << endl;
    }

    // Вывод обновленного массива
    cout << "Обновленный массив:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
