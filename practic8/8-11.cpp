#include <iostream>
#include <vector>

// Функция для вычисления многочлена по схеме Горнера
double evaluatePolynomial(const std::vector<double>& coefficients, double x, int n) {
    if (n == 0) {
        return coefficients[0]; // Базовый случай: многочлен степени 0
    } else {
        return coefficients[n] + x * evaluatePolynomial(coefficients, x, n - 1);
    }
}

int main() {
    // Пример: P(x) = 2x^3 + 3x^2 + 4x + 5
    std::vector<double> coefficients = {5, 4, 3, 2};
    double x = 2.0; // Значение x, в котором вычисляем многочлен
    int degree = coefficients.size() - 1; // Степень многочлена

    double result = evaluatePolynomial(coefficients, x, degree);
    std::cout << "Значение многочлена P(" << x << ") = " << result << std::endl;

    return 0;
}
