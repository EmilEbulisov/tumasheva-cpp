#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления расстояния между точками
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    int n;
    cout << "Введите количество точек: ";
    cin >> n;

    int X[n], Y[n];
    for (int i = 0; i < n; ++i) {
        cout << "Введите координаты точки " << i + 1 << " (X Y): ";
        cin >> X[i] >> Y[i];
    }

    double max_dist = 0, min_dist = distance(X[0], Y[0], X[1], Y[1]);
    int max_i, max_j, min_i, min_j;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double dist = distance(X[i], Y[i], X[j], Y[j]);
            if (dist > max_dist) {
                max_dist = dist;
                max_i = i;
                max_j = j;
            }
            if (dist < min_dist) {
                min_dist = dist;
                min_i = i;
                min_j = j;
            }
        }
    }

    cout << "Наиболее удаленные точки: (" << X[max_i] << ", " << Y[max_i] << ") и (" << X[max_j] << ", " << Y[max_j] << ")" << endl;
    cout << "Наименее удаленные точки: (" << X[min_i] << ", " << Y[min_i] << ") и (" << X[min_j] << ", " << Y[min_j] << ")" << endl;

    return 0;
}
