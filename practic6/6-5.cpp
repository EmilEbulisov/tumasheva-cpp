#include <iostream>
using namespace std;

int main() {
    const int N = 5; // Размер матрицы
    int matrix[N][N];
    float avgRow[N]; // Массив для средних арифметических значений строк

    // Ввод матрицы
    cout << "Введите элементы матрицы 5x5:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Вычисление средних арифметических значений строк
    for (int i = 0; i < N; ++i) {
        int sumRow = 0;
        for (int j = 0; j < N; ++j) {
            sumRow += matrix[i][j];
        }
        avgRow[i] = static_cast<float>(sumRow) / N;
    }

    // Вывод массива B
    cout << "Массив B, содержащий средние арифметические строк:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << avgRow[i] << " ";
    }
    cout << endl;

}
