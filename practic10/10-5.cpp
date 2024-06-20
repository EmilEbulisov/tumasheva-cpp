#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n = 5; // Количество слов в списке
    char** str = new char*[n];

    cout << "Введите строки:\n";
    for (int i = 0; i < n; ++i) {
        str[i] = new char[50];
        cin.getline(str[i], 50);
    }

    // Сортировка по длине
    char* temp = new char[50];
    for (int y = 0; y < n; ++y) {
        for (int i = 0; i < n - 1; ++i) {
            if (strlen(str[i]) < strlen(str[i + 1])) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], temp);
            }
        }
    }

    cout << "\nСортировка по длине:\n";
    for (int i = 0; i < n; ++i) {
        cout << str[i] << endl;
    }

    // Освобождаем память
    delete[] temp;
    for (int i = 0; i < n; ++i) {
        delete[] str[i];
    }
    delete[] str;

    return 0;
}
