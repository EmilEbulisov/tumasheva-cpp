#include <iostream>
#include <cmath>

double f(double x) {
    return std::sin(x) + 0.25;
}

double solve_recursive(double x, double tolerance) {
    double next_x = f(x);
    if (std::abs(next_x - x) < tolerance) {
        return next_x; // Базовый случай: достигли заданной точности
    }
    return solve_recursive(next_x, tolerance); // Рекурсивный вызов
}

int main() {
    const double tolerance = 1e-6;
    double initial_guess = 0.5;

    double root = solve_recursive(initial_guess, tolerance);

    std::cout << "Корень уравнения (рекурсия): x = " << root << std::endl;

    return 0;
}
