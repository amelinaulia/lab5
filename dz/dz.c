#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() 
{
    setlocale(LC_ALL, "");
    double x, y, z, t;
    x = 14.26;
    y = -1.22;
    z = 3.5 * pow(10, -2);

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.6f\n", z);

    t = ((2 * cos(x - (M_PI / 6)) / (0.5 + pow(sin(y), 2))) * (1 + ((pow(z, 2)) / (3 - pow(z, 2) / 5))));

    printf("t = %.6f\n", t);

}