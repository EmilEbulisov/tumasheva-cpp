//Найти слова одинаковой длины и вывести их на экран: Вот пример решения на C++, где пользователь вводит 10 отдельных слов:
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int wordCount = 10;
    string words[wordCount];

    cout << "Введите " << wordCount << " слов: ";
    for (int i = 0; i < wordCount; ++i) {
        cin >> words[i];
    }

    cout << "Слова одинаковой длины:" << endl;
    for (int i = 0; i < wordCount; ++i) {
        for (int j = i + 1; j < wordCount; ++j) {
            if (words[i].length() == words[j].length()) {
                cout << words[i] << " и " << words[j] << endl;
            }
        }
    }

    return 0;
}
