#include <iostream>
#include <cmath>
#include <iomanip>

/* находит длину вектора на точках
    х1  координаты по х первой точки
    y1  координаты по y первой точки

    x2  координаты по х второй точки
    y2  координаты по y второй точки

    return длина вектора на заданных точках
*/
double getVectorLenght(int x1, int y1,
                       int x2, int y2);

int main() {
    int x1 = 0,
        y1 = 0,
        x2 = 0,
        y2 = 0;

    std::cin >> x1 >> y1 >> x2 >> y2;

    double ans = getVectorLenght(x1, y1, x2, y2);

    std::cout << std::setprecision(5) << std::fixed << ans << std::endl;

    return 0;
}

double getVectorLenght(int x1, int y1,
                       int x2, int y2)
{
    int x0 = x2 - x1,
        y0 = y2 - y1;

    double lenght = std::sqrt(std::pow(x0, 2) + std::pow(y0, 2));

    return lenght;
}
