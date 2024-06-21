//Найти слова с нечетным количеством символов в строке: Вот пример решения на C++ для поиска слов с нечетным количеством символов в строке, где слова разделены пробелами:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    int wordCount = 0;
    for (size_t i = 0; i < input.length(); ++i) {
        if (input[i] != ' ') {
            // Начало слова
            size_t wordStart = i;
            while (i < input.length() && input[i] != ' ') {
                ++i;
            }
            // Конец слова
            size_t wordEnd = i;
            size_t wordLength = wordEnd - wordStart;
            if (wordLength % 2 != 0) {
                ++wordCount;
            }
        }
    }

    cout << "Количество слов с нечетным количеством символов: " << wordCount << endl;
    return 0;
}
