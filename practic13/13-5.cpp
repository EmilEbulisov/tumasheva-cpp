#include <fstream>
#include <random>
using namespace std;

int main() {
    // Создаем файл с 20 случайными числами от -10 до +10
    ofstream f_out("first.txt");
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(-10, 10);
    int odd = -11; // Первое нечетное число

    for (int i = 0; i < 20; ++i) {
        int rnd = dist(mt);
        if (odd == -11 && rnd % 2 != 0)
            odd = abs(rnd);
        f_out << rnd << '\n';
    }
    f_out.close();

    // Используем созданный файл как входной
    ifstream f_in("first.txt");
    ofstream s_out("second.txt");
    while (f_in.peek() != EOF) {
        int tmp;
        f_in >> tmp;
        s_out << tmp + odd << '\n';
    }
    f_in.close();
    s_out.close();
}
