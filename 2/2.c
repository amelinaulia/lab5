#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    const double c = 0.4;

    double x, a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = log10(x);           // a = lg(x)
    b = pow(a, 2) + sqrt(c * x);  // b = a² + √(c*x)

    //  y = e^(2x) + 9.7^b
    y = exp(2 * x) + pow(9.7, b);

    printf("Входной параметр x = %.1f\n", x);
    printf("Константа c = %.1f\n", c);
    printf("Промежуточное значение a = lg(%.1f) = %.4f\n", x, a);
    printf("Промежуточное значение b = a² + √(c*x) = %.4f\n", b);
    printf("Вычисленное значение функции: y = %.2f\n", y);

}