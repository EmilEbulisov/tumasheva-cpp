#include <iostream>
#include <cstring>

bool isPalindrome(const char* word) {
    int length = std::strlen(word);
    for (int i = 0; i < length / 2; ++i) {
        if (word[i] != word[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[100];
    std::cout << "Введите слово: ";
    std::cin >> word;

    if (isPalindrome(word)) {
        std::cout << "Да, это слово - перевертыш!" << std::endl;
    } else {
        std::cout << "Нет, это слово не является перевертышем." << std::endl;
    }

    return 0;
}
