#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
    setlocale(LC_ALL, "");
    double gr, rad, result;

    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;
    result = sin(rad);
    printf("sin(%.2f°) = %.6f\n", gr, result);

    printf("\nПроверка на стандартных значениях:\n");
    printf("sin(30°) = %.6f\n", sin(30.0 * M_PI / 180.0));
    printf("sin(60°) = %.6f\n", sin(60.0 * M_PI / 180.0));
    printf("sin(90°) = %.6f\n", sin(90.0 * M_PI / 180.0));


}