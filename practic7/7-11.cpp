#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления длины стороны по координатам вершин
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    setlocale(LC_ALL, "Russian");

    int x1, y1, x2, y2, x3, y3;
    double side1, side2, side3, perimeter, half_perimeter, area, height1, height2, height3, smallest_height;

    cout << "Введите координаты вершины A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины B (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины C (x3 y3): ";
    cin >> x3 >> y3;

    // Вычисляем длины сторон
    side1 = distance(x1, y1, x2, y2);
    side2 = distance(x2, y2, x3, y3);
    side3 = distance(x3, y3, x1, y1);

    // Вычисляем периметр
    perimeter = side1 + side2 + side3;
    half_perimeter = perimeter / 2;

    // Вычисляем площадь
    area = sqrt(half_perimeter * (half_perimeter - side1) * (half_perimeter - side2) * (half_perimeter - side3));

    // Вычисляем высоты
    height1 = (2 * area) / side1;
    height2 = (2 * area) / side2;
    height3 = (2 * area) / side3;

    // Находим наименьшую высоту
    smallest_height = min(min(height1, height2), height3);

    cout << "Высота, перпендикулярная стороне AB: " << height1 << endl;
    cout << "Высота, перпендикулярная стороне BC: " << height2 << endl;
    cout << "Высота, перпендикулярная стороне CA: " << height3 << endl;
    cout << "Наименьшая высота: " << smallest_height << endl;

    return 0;
}
