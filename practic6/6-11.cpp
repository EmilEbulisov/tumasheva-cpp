#include <iostream>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N = 0, pob = 0, i, j;
    cout << "Введите размер массива N: ";
    cin >> N;

    srand((unsigned int)time(0));
    int m[66][66];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = rand() % 3;
            if (i == j) m[i][j] = 0; // Обнуляем элементы на главной диагонали
        }
    }

    // Теперь проверим, сколько команд имеют больше побед, чем поражений
    for (i = 0; i < N; i++) {
        pob = 0;
        for (j = 0; j < N; j++) {
            if (m[i][j] == 2) pob++;
            else if (m[i][j] == 0) pob--;
        }
    }

    if (pob > 0) {
        cout << "Количество команд, у которых побед больше, чем поражений: " << pob << "\n";
    } else {
        cout << "Нет команд, у которых побед больше, чем поражений\n";
    }

    // Выводим матрицу
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
}
