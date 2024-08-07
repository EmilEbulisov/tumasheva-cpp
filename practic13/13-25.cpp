#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Создаем файл с 20 случайными числами от -10 до +10
    ofstream f_out("input.txt");
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(-10, 10);

    for (int i = 0; i < 20; ++i) {
        int rnd = dist(mt);
        f_out << rnd << '\n';
    }
    f_out.close();

    // Читаем числа из файла и находим максимальное
    ifstream f_in("input.txt");
    vector<int> numbers;
    int num;
    while (f_in >> num) {
        numbers.push_back(num);
    }
    f_in.close();

    int max_num = *max_element(numbers.begin(), numbers.end());

    // Записываем в выходной файл числа, заменяя положительные на самих себя, разделенные на максимальное число
    ofstream out("output.txt");
    for (int n : numbers) {
        if (n > 0) {
            double modified_num = static_cast<double>(n) / max_num;
            out << modified_num << '\n';
        } else {
            out << n << '\n';
        }
    }
    out.close();

    cout << "Решение записано в файл output.txt." << endl;
    return 0;
}
