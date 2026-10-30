#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 0.61;
    const double y = 3.4;
    const double z = 16.5;

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);

    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f\n", B(x, y, z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return pow(x, 3) * pow(tan(pow(x + y, 2)), 2) + z / sqrt(x + y);
}

double B(const double x, const double y, const double z)
{
    return (y * pow(x, 2) - z) / (exp(z * x) - 1.0);
}
