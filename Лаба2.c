#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Вхідні дані
    double x = 0.0;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // Результати
    double r1 = 0.0;
    double r2 = 0.0;
    double r3 = 0.0;
    double r4 = 0.0;
    double r5 = 0.0;

    // Допоміжні змінні
    double d = 0.0;
    double t = 0.0;

    // Введення даних
    printf("Введіть x, a, b, c: ");

    if (scanf("%lf %lf %lf %lf", &x, &a, &b, &c) != 4) {
        printf("Помилка введення!\n");
        return 1;
    }

    // Завдання 1, варіант 42
    // 1 / sqrt(a*x^2 + b*x + c)

    d = a * x * x + b * x + c;

    if (d > 0) {
        r1 = 1.0 / sqrt(d);
        printf("Завдання 1: %.4f\n", r1);
    } else {
        printf("Завдання 1 - Немає рішення\n");
    }


    // Завдання 2, варіант 49
    // tan(a^(cos(2*x)/a))

    if (a > 0) {
        t = pow(a, cos(2 * x) / a);

        if (cos(t) != 0) {
            r2 = tan(t);
            printf("Завдання 2: %.4f\n", r2);
        } else {
            printf("Завдання 2 - Немає рішення\n");
        }
    } else {
        printf("Завдання 2 - Немає рішення\n");
    }


    // Завдання 3, варіант 8
    // ln|cos(x)| / ln(1 + x^2)

    if (cos(x) != 0 && x != 0) {
        r3 = log(fabs(cos(x))) / log(1 + x * x);
        printf("Завдання 3: %.4f\n", r3);
    } else {
        printf("Завдання 3 - Немає рішення\n");
    }


    // Завдання 4, варіант 45
    // |x| / |x + 1|

    if (x != -1) {
        r4 = fabs(x) / fabs(x + 1);
        printf("Завдання 4: %.4f\n", r4);
    } else {
        printf("Завдання 4 - Немає рішення\n");
    }


    // Завдання 5, варіант 46
    // b * a^(1/b) / a

    if (a > 0 && b != 0) {
        r5 = b * pow(a, 1.0 / b) / a;
        printf("Завдання 5: %.4f\n", r5);
    } else {
        printf("Завдання 5 - Немає рішення\n");
    }

    return 0;
}