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

    a = log10(x);
    b = pow(a, 2) + sqrt(c * x);
    y = exp(2 * x) + pow(9.7, b);

    int A = (int)a, B = (int)b, C = (int)y;
    int pr_a = (A % 2 == 0) != (B % 2 == 0);
    int pr_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("\nРЕЗУЛЬТАТ ВЫЧИСЛЕНИЯ:\n");
    printf("x = %.1f, y = %.2f\n", x, y);
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Только одно из A и В четное: %d\n", pr_a);
    printf("Все A,B,C кратны трем: %d\n", pr_b);
}